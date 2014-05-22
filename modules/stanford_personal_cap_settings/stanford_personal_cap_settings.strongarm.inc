<?php
/**
 * @file
 * stanford_personal_cap_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_personal_cap_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stanford_cap_api_import_fields_html';
  $strongarm->value = 1;
  $export['stanford_cap_api_import_fields_html'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stanford_cap_api_import_profile_fields';
  $strongarm->value = 'import_list';
  $export['stanford_cap_api_import_profile_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stanford_cap_api_profiles_sync_field_list';
  $strongarm->value = array(
    // 'profilePhotos' => 'profilePhotos',
    // 'profilePhotos.big' => 'profilePhotos.big',
    // 'profilePhotos.big.height' => 'profilePhotos.big.height',
    // 'profilePhotos.big.url' => 'profilePhotos.big.url',
    // 'profilePhotos.big.width' => 'profilePhotos.big.width',
    // 'profilePhotos.square' => 'profilePhotos.square',
    // 'profilePhotos.square.height' => 'profilePhotos.square.height',
    // 'profilePhotos.square.url' => 'profilePhotos.square.url',
    // 'profilePhotos.square.width' => 'profilePhotos.square.width',
    "alternateContact" => "alternateContact",
    "alternateContact.email" => "alternateContact.email",
    "alternateContact.phoneNumbers" => "alternateContact.phoneNumbers",
    "bio" => "bio",
    "internetLinks" => "internetLinks",
    "internetLinks.label" => "internetLinks.label",
    "internetLinks.url" => "internetLinks.url",
    "primaryContact" => "primaryContact",
    "primaryContact.email" => "primaryContact.email",
    "primaryContact.phoneNumbers" => "primaryContact.phoneNumbers",
    0 => 'longTitle.organization.orgCode',
    1 => 'shortTitle.organization.orgCode',
    2 => 'titles.organization.orgCode',
  );
  $export['stanford_cap_api_profiles_sync_field_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stanford_cap_api_profile_allow_edit';
  $strongarm->value = 1;
  $export['stanford_cap_api_profile_allow_edit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stanford_cap_api_profile_custom_fields';
  $strongarm->value = 1;
  $export['stanford_cap_api_profile_custom_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stanford_cap_api_profile_update';
  $strongarm->value = 'nightly';
  $export['stanford_cap_api_profile_update'] = $strongarm;

  return $export;
}
