<?php
/**
 * @file
 * Admin ui functionality.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function stanford_personal_form_block_admin_configure_alter(&$form, &$form_state, $form_id) {
  if (!user_access('stanford personal use full block')) {
    $form['regions']['#type'] = 'hidden';
    $form['visibility']['node_type']['#type'] = 'hidden';
    $form['visibility']['role']['#type'] = 'hidden';
    $form['visibility']['user']['#type'] = 'hidden';
    $form['settings']['css_class']['#type'] = 'hidden';
    //"visiblity" - ya rly.
    $form['visiblity']['context_respect']['#type'] = 'hidden';
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function stanford_personal_form_bean_form_alter(&$form, &$form_state, $form_id) {
  if (!user_access('stanford personal use full block')) {
    $form['revision']['#type'] = 'hidden';
    $form['actions']['delete']['#type'] = 'hidden';
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function stanford_personal_form_stanford_page_node_form_alter(&$form, &$form_state, $form_id) {
  if (!user_access('stanford personal use full block')) {
    $form['options']['promote']['#type'] = 'hidden';
    $form['options']['sticky']['#type'] = 'hidden';
  }

  // hide the menu form, we'll default to main-menu later
  // only do this if the user is not an administrator
  if (!user_access('administer menu')) {
    $form['menu']['#type'] = 'hidden';
  }

  // add submit functions to form
  $form['#submit'][] = 'stanford_personal_stanford_page_node_form_submit';
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function stanford_personal_form_stanford_person_node_form_alter(&$form, &$form_state) {

  /**
   * HIDE ALL THESE THINGS!
   */
  $form['title']['#access'] = user_access('administer nodes');
  // Clear out the title for the name and url change.
  if (!$form['title']['#access']) {
    $form['title']['#default_value'] = '';
  }
  $form['field_s_person_cohort']['#access'] = user_access('administer nodes');
  $form['field_s_person_dissertatn_title']['#access'] = user_access('administer nodes');
  $form['field_s_person_education']['#access'] = user_access('administer nodes');
  //$form['field_s_person_email']['#access'] = user_access('administer nodes');
  $form['body']['#access'] = user_access('administer nodes');
  $form['field_s_person_faculty_title']['#access'] = user_access('administer nodes');
  $form['field_s_person_faculty_type']['#access'] = user_access('administer nodes');
  $form['field_s_person_fax_display']['#access'] = user_access('administer nodes');
  $form['field_s_person_graduation_year']['#access'] = user_access('administer nodes');
  $form['field_s_person_interests']['#access'] = user_access('administer nodes');
  $form['field_s_person_mail_address_dspl']['#access'] = user_access('administer nodes');
  $form['field_s_person_office_hours']['#access'] = user_access('administer nodes');
  $form['field_s_person_office_location']['#access'] = user_access('administer nodes');
  $form['field_s_person_staff_type']['#access'] = user_access('administer nodes');
  $form['field_s_person_student_type']['#access'] = user_access('administer nodes');
  $form['field_s_person_study']['#access'] = user_access('administer nodes');
  $form['field_s_person_type']['#access'] = user_access('administer nodes');
  $form['field_s_person_weight']['#access'] = user_access('administer nodes');
  $form['path']['#access'] = user_access('administer nodes');

  unset($_GET['destination']);
  unset($form_state['redirect']);
  $form['actions']['submit']['#submit'][] = 'stanford_personal_person_node_submit';
}

/**
 * [stanford_personal_form_stanford_person_node_form_alter_submit description]
 * @param  [type] $form       [description]
 * @param  [type] $form_state [description]
 * @return [type]             [description]
 */
function stanford_personal_person_node_submit($form, &$form_state) {
  $form_state['redirect'] = 'admin/stanford-personal/profile';
}

/**
 * Tasks to run when editing a form
 */

function stanford_personal_stanford_page_node_form_submit($form, &$form_state) {

  // Set the default menu to main-menu and the link title to the page title
  // Only do this if the user can't administer menus

  $nid = $form['nid']['#value'];

  if (_stanford_personal_is_home($nid) && _stanford_personal_home_is_in_menu()) {
    return;
  }

  if (!user_access('administer menu')) {
    $form_state['values']['menu']['link_title'] = $form_state['values']['title'];
    $form_state['values']['menu']['enabled'] = 1;
    $form_state['values']['menu']['parent'] = 'main-menu:0';
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function stanford_personal_form_system_site_information_settings_alter(&$form, &$form_state, $form_id) {
  if (!user_access('stanford personal use full block')) {
    $form['site_information']['site_slogan']['#type'] = 'hidden';
    $form['error_page']['#type'] = 'hidden';
    $form['front_page']['#type'] = 'hidden';
  }
}
