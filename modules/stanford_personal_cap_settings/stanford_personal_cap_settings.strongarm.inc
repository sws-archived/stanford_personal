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
  $strongarm->name = 'stanford_cap_api_auth_uri';
  $strongarm->value = 'https://authz.stanford.edu/oauth/token';
  $export['stanford_cap_api_auth_uri'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stanford_cap_api_base_url';
  $strongarm->value = 'https://api.stanford.edu';
  $export['stanford_cap_api_base_url'] = $strongarm;

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
    'alias' => 'alias',
    'aliases' => 'aliases',
    'aliases.alias' => 'aliases.alias',
    'aliases.primaryAlias' => 'aliases.primaryAlias',
    'currentRoleAtStanford' => 'currentRoleAtStanford',
    'displayName' => 'displayName',
    'internetLinks' => 'internetLinks',
    'internetLinks.contentType' => 'internetLinks.contentType',
    'internetLinks.label' => 'internetLinks.label',
    'internetLinks.type' => 'internetLinks.type',
    'internetLinks.url' => 'internetLinks.url',
    'names' => 'names',
    'names.legal' => 'names.legal',
    'names.legal.firstName' => 'names.legal.firstName',
    'names.legal.lastName' => 'names.legal.lastName',
    'names.legal.middleName' => 'names.legal.middleName',
    'names.preferred' => 'names.preferred',
    'names.preferred.firstName' => 'names.preferred.firstName',
    'names.preferred.lastName' => 'names.preferred.lastName',
    'names.preferred.middleName' => 'names.preferred.middleName',
    'primaryContact' => 'primaryContact',
    'primaryContact.email' => 'primaryContact.email',
    'primaryContact.phoneNumbers' => 'primaryContact.phoneNumbers',
    'profilePhotos' => 'profilePhotos',
    'profilePhotos.big' => 'profilePhotos.big',
    'profilePhotos.big.contentType' => 'profilePhotos.big.contentType',
    'profilePhotos.big.height' => 'profilePhotos.big.height',
    'profilePhotos.big.placeholder' => 'profilePhotos.big.placeholder',
    'profilePhotos.big.type' => 'profilePhotos.big.type',
    'profilePhotos.big.url' => 'profilePhotos.big.url',
    'profilePhotos.big.width' => 'profilePhotos.big.width',
    'titles' => 'titles',
    'titles.label' => 'titles.label',
    'titles.title' => 'titles.title',
    'uid' => 'uid',
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
  $strongarm->value = 0;
  $export['stanford_cap_api_profile_custom_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'stanford_cap_api_profile_update';
  $strongarm->value = 'nightly';
  $export['stanford_cap_api_profile_update'] = $strongarm;

  return $export;
}
