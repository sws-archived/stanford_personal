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
  $strongarm->name = 'stanford_cap_api_configured';
  $strongarm->value = TRUE;
  $export['stanford_cap_api_configured'] = $strongarm;

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
    'alternateContact' => 'alternateContact',
    'alternateContact.email' => 'alternateContact.email',
    'alternateContact.phoneNumbers' => 'alternateContact.phoneNumbers',
    'alternateContact.title' => 'alternateContact.title',
    'currentRoleAtStanford' => 'currentRoleAtStanford',
    'displayName' => 'displayName',
    'internetLinks' => 'internetLinks',
    'internetLinks.url' => 'internetLinks.url',
    'primaryContact' => 'primaryContact',
    'primaryContact.email' => 'primaryContact.email',
    'primaryContact.name' => 'primaryContact.name',
    'primaryContact.phoneNumbers' => 'primaryContact.phoneNumbers',
    'primaryContact.title' => 'primaryContact.title',
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
  $strongarm->name = 'stanford_cap_api_profiles_text_fields_list';
  $strongarm->value = array(
    0 => 'serviceWork.description.html',
    1 => 'serviceWork.description.text',
    2 => 'serviceWork.detail.html',
    3 => 'serviceWork.detail.text',
    4 => 'presentations.description.html',
    5 => 'presentations.description.text',
    6 => 'presentations.detail.html',
    7 => 'presentations.detail.text',
    8 => 'projects.description.html',
    9 => 'projects.description.text',
    10 => 'projects.detail.html',
    11 => 'projects.detail.text',
    12 => 'researchProjects.description.html',
    13 => 'researchProjects.description.text',
    14 => 'researchProjects.detail.html',
    15 => 'researchProjects.detail.text',
    16 => 'workExperience.description.html',
    17 => 'workExperience.description.text',
    18 => 'workExperience.detail.html',
    19 => 'workExperience.detail.text',
    20 => 'publications.detail.html',
    21 => 'publications.detail.text',
    22 => 'publications.chicagoCitation',
    23 => 'publications.apaCitation',
    24 => 'publications.mlaCitation',
    25 => 'publications.capCitation',
    26 => 'publications.abstractText',
    27 => 'industryRelationships.detail.html',
    28 => 'industryRelationships.detail.text',
    29 => 'industryRelationships.disclosureStatement.brief',
    30 => 'industryRelationships.disclosureStatement.full',
  );
  $export['stanford_cap_api_profiles_text_fields_list'] = $strongarm;

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
