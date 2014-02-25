<?php
/**
 * @file
 * stanford_personal_shortcuts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_personal_shortcuts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_personal_admin_shortcuts';
  $context->description = 'Place menus and blocks in the Admin Shortcuts region';
  $context->tag = 'Stanford Sites Jumpstart';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'editor' => 'editor',
        'site owner' => 'site owner',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-admin-shortcuts-home' => array(
          'module' => 'menu',
          'delta' => 'menu-admin-shortcuts-home',
          'region' => 'admin_shortcuts',
          'weight' => '-10',
        ),
        'menu-menu-admin-shortcuts-site-action' => array(
          'module' => 'menu',
          'delta' => 'menu-admin-shortcuts-site-action',
          'region' => 'admin_shortcuts',
          'weight' => '-9',
        ),
        'menu-menu-admin-shortcuts-add-feature' => array(
          'module' => 'menu',
          'delta' => 'menu-admin-shortcuts-add-feature',
          'region' => 'admin_shortcuts',
          'weight' => '-8',
        ),
        'menu-menu-admin-shortcuts-get-help' => array(
          'module' => 'menu',
          'delta' => 'menu-admin-shortcuts-get-help',
          'region' => 'admin_shortcuts',
          'weight' => '-7',
        ),
        'menu-menu-admin-shortcuts-ready-to-la' => array(
          'module' => 'menu',
          'delta' => 'menu-admin-shortcuts-ready-to-la',
          'region' => 'admin_shortcuts',
          'weight' => '-6',
        ),
        'stanford_personal_shortcuts-hello' => array(
          'module' => 'stanford_personal_shortcuts',
          'delta' => 'hello',
          'region' => 'admin_shortcuts',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Place menus and blocks in the Admin Shortcuts region');
  t('Stanford Sites Jumpstart');
  $export['stanford_personal_admin_shortcuts'] = $context;

  return $export;
}
