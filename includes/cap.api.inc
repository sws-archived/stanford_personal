<?php
/**
 * A collection of helper functions around interacting witht he CAP API
 */

/**
 * [stanford_personal_import_cap_profile_from_cap description]
 * @param  boolean $sunetid [description]
 * @return [type]           [description]
 */
function stanford_personal_import_cap_profile_from_cap($sunetid = FALSE) {

  // Need this. Duh.
  if (!$sunetid) {
    return FALSE;
  }

  // The following is stolen and modified code from the installation profile.
  module_load_include('inc', 'stanford_cap_api', 'stanford_cap_api.admin');

  // Test the connection with the CAP API service.
  $username = variable_get('stanford_cap_api_username', '');
  $password = variable_get('stanford_cap_api_password', '');
  $auth_uri = "https://authz.stanford.edu/oauth/token";
  $auth_token = stanford_cap_api_auth($username, $password, $auth_uri);

  if (!$auth_token) {
    drupal_set_message("Could not connect to CAP API", 'error');
    return FALSE;
  }

  // Look on the CAP api for a public profile that matches the name.
  $form = array();
  $form_state = array();
  $form_state['values'] = array();
  $form_state['values']['sunet_id'] = $sunetid;
  drupal_form_submit('stanford_cap_api_profiles_import_form', $form_state);
  stanford_cap_api_profiles_import_result_form($form, $form_state);

  // Check to see if there are results.
  $profile = FALSE;
  if (isset($_SESSION['search_response']['values'][0])) {
    $profile = $_SESSION['search_response']['values'][0];
  }
  else {
    // No results? Then kick over to the stanford_person feature.
    drupal_set_message('CAP profile for ' . $sunetid . ' cannot be found. Ensure the CAP profile is public and please try again.', 'error');
    return FALSE;
  }

  // Import the profile.
  stanford_cap_api_profiles_profile_import($profile['profileId']);

}

/**
 * CAP Does not uninstall well. Use this to remove all the loitering gack.
 * @return [type] [description]
 */
function stanford_personal_deep_clean_out_cap() {

 // Clear out a few more that the CAP module misses...
  variable_del('stanford_cap_api_profiles_cron_run_last');
  variable_del('stanford_cap_api_profiles_schema_synchronized');
  variable_del('stanford_cap_api_profiles_text_fields_list');
  variable_del('stanford_cap_api_token');
  variable_del('stanford_cap_api_token_expire');
  variable_del('stanford_sites_personal_cap_ok');

  // Delete all the field collections used with cap
  // Delete all the fields used with CAP
  // Delete the content type

  $result = db_select('field_config', 'fc')
    ->fields('fc')
    ->condition('field_name', 'cap_%', 'LIKE')
    ->execute();

  while($data = $result->fetchAssoc()) {
    $field_name = $data['field_name'];

    db_drop_table('field_data_' . $field_name);
    db_drop_table('field_revision_' . $field_name);

    db_delete('field_config')
    ->condition('field_name', $field_name)
    ->execute();

    db_delete('field_config_instance')
    ->condition('field_name', $field_name)
    ->execute();

  }

  db_delete('field_config')
    ->condition('field_name', 'field_cap_profile_organization')
    ->execute();

  db_delete('field_config_instance')
    ->condition('field_name', 'field_cap_profile_organization')
    ->execute();

  db_drop_table('field_data_field_cap_profile_organization');
  db_drop_table('field_revision_field_cap_profile_organization');

  db_delete('node_type')
    ->condition('type', 'cap_stanford_profile')
    ->execute();

}
