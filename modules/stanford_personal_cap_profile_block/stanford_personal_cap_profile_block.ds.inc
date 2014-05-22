<?php
/**
 * @file
 * stanford_personal_cap_profile_block.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function stanford_personal_cap_profile_block_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|cap_stanford_profile|profile_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'cap_stanford_profile';
  $ds_fieldsetting->view_mode = 'profile_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => 'profile-block-title',
      ),
    ),
  );
  $export['node|cap_stanford_profile|profile_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|stanford_person|profile_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'stanford_person';
  $ds_fieldsetting->view_mode = 'profile_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|stanford_person|profile_block'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_personal_cap_profile_block_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|cap_stanford_profile|profile_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'cap_stanford_profile';
  $ds_layout->view_mode = 'profile_block';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'cap_primarycontact',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'cap_primarycontact' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|cap_stanford_profile|profile_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_person|profile_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_person';
  $ds_layout->view_mode = 'profile_block';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_s_person_profile_picture',
        1 => 'title',
        2 => 'field_s_person_phone_display',
        3 => 'field_s_person_email',
        4 => 'field_s_person_office_location',
        5 => 'field_s_person_office_hours',
      ),
    ),
    'fields' => array(
      'field_s_person_profile_picture' => 'ds_content',
      'title' => 'ds_content',
      'field_s_person_phone_display' => 'ds_content',
      'field_s_person_email' => 'ds_content',
      'field_s_person_office_location' => 'ds_content',
      'field_s_person_office_hours' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|stanford_person|profile_block'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function stanford_personal_cap_profile_block_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'profile_block';
  $ds_view_mode->label = 'profile_block';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['profile_block'] = $ds_view_mode;

  return $export;
}
