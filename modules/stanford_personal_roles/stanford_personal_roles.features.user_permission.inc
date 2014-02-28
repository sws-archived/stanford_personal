<?php
/**
 * @file
 * stanford_personal_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function stanford_personal_roles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access stanford personal help'.
  $permissions['access stanford personal help'] = array(
    'name' => 'access stanford personal help',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'stanford_personal',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create any stanford_banner bean'.
  $permissions['create any stanford_banner bean'] = array(
    'name' => 'create any stanford_banner bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any stanford_contact bean'.
  $permissions['create any stanford_contact bean'] = array(
    'name' => 'create any stanford_contact bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any stanford_large_block bean'.
  $permissions['create any stanford_large_block bean'] = array(
    'name' => 'create any stanford_large_block bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any stanford_postcard bean'.
  $permissions['create any stanford_postcard bean'] = array(
    'name' => 'create any stanford_postcard bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any stanford_social_media_connect bean'.
  $permissions['create any stanford_social_media_connect bean'] = array(
    'name' => 'create any stanford_social_media_connect bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create stanford_page content'.
  $permissions['create stanford_page content'] = array(
    'name' => 'create stanford_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete any stanford_banner bean'.
  $permissions['delete any stanford_banner bean'] = array(
    'name' => 'delete any stanford_banner bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any stanford_contact bean'.
  $permissions['delete any stanford_contact bean'] = array(
    'name' => 'delete any stanford_contact bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any stanford_large_block bean'.
  $permissions['delete any stanford_large_block bean'] = array(
    'name' => 'delete any stanford_large_block bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any stanford_page content'.
  $permissions['delete any stanford_page content'] = array(
    'name' => 'delete any stanford_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any stanford_postcard bean'.
  $permissions['delete any stanford_postcard bean'] = array(
    'name' => 'delete any stanford_postcard bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any stanford_social_media_connect bean'.
  $permissions['delete any stanford_social_media_connect bean'] = array(
    'name' => 'delete any stanford_social_media_connect bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete own stanford_page content'.
  $permissions['delete own stanford_page content'] = array(
    'name' => 'delete own stanford_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stanford_banner bean'.
  $permissions['edit any stanford_banner bean'] = array(
    'name' => 'edit any stanford_banner bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any stanford_contact bean'.
  $permissions['edit any stanford_contact bean'] = array(
    'name' => 'edit any stanford_contact bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any stanford_large_block bean'.
  $permissions['edit any stanford_large_block bean'] = array(
    'name' => 'edit any stanford_large_block bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any stanford_page content'.
  $permissions['edit any stanford_page content'] = array(
    'name' => 'edit any stanford_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any stanford_postcard bean'.
  $permissions['edit any stanford_postcard bean'] = array(
    'name' => 'edit any stanford_postcard bean',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any stanford_social_media_connect bean'.
  $permissions['edit any stanford_social_media_connect bean'] = array(
    'name' => 'edit any stanford_social_media_connect bean',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit own stanford_page content'.
  $permissions['edit own stanford_page content'] = array(
    'name' => 'edit own stanford_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'show format selection for field_collection_item'.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'site owner' => 'site owner',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'stanford personal manage pages'.
  $permissions['stanford personal manage pages'] = array(
    'name' => 'stanford personal manage pages',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'stanford_personal',
  );

  // Exported permission: 'stanford personal use full block'.
  $permissions['stanford personal use full block'] = array(
    'name' => 'stanford personal use full block',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'stanford_personal',
  );

  // Exported permission: 'use text format content_editor_text_format'.
  $permissions['use text format content_editor_text_format'] = array(
    'name' => 'use text format content_editor_text_format',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any stanford_banner bean'.
  $permissions['view any stanford_banner bean'] = array(
    'name' => 'view any stanford_banner bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any stanford_contact bean'.
  $permissions['view any stanford_contact bean'] = array(
    'name' => 'view any stanford_contact bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any stanford_large_block bean'.
  $permissions['view any stanford_large_block bean'] = array(
    'name' => 'view any stanford_large_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any stanford_postcard bean'.
  $permissions['view any stanford_postcard bean'] = array(
    'name' => 'view any stanford_postcard bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any stanford_social_media_connect bean'.
  $permissions['view any stanford_social_media_connect bean'] = array(
    'name' => 'view any stanford_social_media_connect bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'site owner' => 'site owner',
    ),
    'module' => 'system',
  );

  return $permissions;
}
