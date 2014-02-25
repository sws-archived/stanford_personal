<?php
/**
 * @file
 * stanford_personal_shortcuts.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function stanford_personal_shortcuts_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-admin-shortcuts-get-help.
  $menus['menu-admin-shortcuts-get-help'] = array(
    'menu_name' => 'menu-admin-shortcuts-get-help',
    'title' => 'Admin Shortcuts: Get Help',
    'description' => '',
  );
  // Exported menu: menu-admin-shortcuts-home.
  $menus['menu-admin-shortcuts-home'] = array(
    'menu_name' => 'menu-admin-shortcuts-home',
    'title' => 'Admin Shortcuts: Home',
    'description' => '',
  );
  // Exported menu: menu-admin-shortcuts-site-action.
  $menus['menu-admin-shortcuts-site-action'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'title' => 'Admin Shortcuts: Site Actions',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Shortcuts: Get Help');
  t('Admin Shortcuts: Home');
  t('Admin Shortcuts: Site Actions');


  return $menus;
}
