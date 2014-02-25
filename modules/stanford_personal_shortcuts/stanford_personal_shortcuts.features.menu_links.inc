<?php
/**
 * @file
 * stanford_personal_shortcuts.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function stanford_personal_shortcuts_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-admin-shortcuts-get-help:admin/stanford-personal
  $menu_links['menu-admin-shortcuts-get-help:admin/stanford-personal'] = array(
    'menu_name' => 'menu-admin-shortcuts-get-help',
    'link_path' => 'admin/stanford-personal',
    'router_path' => 'admin/stanford-personal',
    'link_title' => 'Get Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Learn about ways to get help',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-admin-shortcuts-home:<front>
  $menu_links['menu-admin-shortcuts-home:<front>'] = array(
    'menu_name' => 'menu-admin-shortcuts-home',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Home',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-admin-shortcuts-site-action:admin/config/system/site-information
  $menu_links['menu-admin-shortcuts-site-action:admin/config/system/site-information'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Edit Site Name',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit your site name',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'admin/stanford-personal',
  );

  // Exported menu link: menu-admin-shortcuts-site-action:admin/stanford-personal
  $menu_links['menu-admin-shortcuts-site-action:admin/stanford-personal'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/stanford-personal',
    'router_path' => 'admin/stanford-personal',
    'link_title' => 'Site Actions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
  );


  // Translatables
  // Included for use with string extractors like potx.
  t('Edit Site Name');
  t('Get Help');
  t('Home');
  t('Site Actions');

  return $menu_links;
}
