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

  // Exported menu link: menu-admin-shortcuts-get-help_get-help:admin/stanford-personal
  $menu_links['menu-admin-shortcuts-get-help_get-help:admin/stanford-personal'] = array(
    'menu_name' => 'menu-admin-shortcuts-get-help',
    'link_path' => 'admin/stanford-personal',
    'router_path' => 'admin',
    'link_title' => 'Get Help',
    'options' => array(
      'attributes' => array(
        'title' => 'Learn about ways to get help',
      ),
      'identifier' => 'menu-admin-shortcuts-get-help_get-help:admin/stanford-personal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-admin-shortcuts-home_home:<front>
  $menu_links['menu-admin-shortcuts-home_home:<front>'] = array(
    'menu_name' => 'menu-admin-shortcuts-home',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => 'Home',
      ),
      'identifier' => 'menu-admin-shortcuts-home_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-admin-shortcuts-site-action_change-site-settings:admin/stanford-personal/site-settings
  $menu_links['menu-admin-shortcuts-site-action_change-site-settings:admin/stanford-personal/site-settings'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/stanford-personal/site-settings',
    'router_path' => 'admin/stanford-personal/site-settings',
    'link_title' => 'Change Site Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_change-site-settings:admin/stanford-personal/site-settings',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-personal',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_customize-design:admin/stanford-personal/design
  $menu_links['menu-admin-shortcuts-site-action_customize-design:admin/stanford-personal/design'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/stanford-personal/design',
    'router_path' => 'admin/stanford-personal/design',
    'link_title' => 'Customize Design',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_customize-design:admin/stanford-personal/design',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-personal',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_manage-blocks:admin/stanford-personal/blocks
  $menu_links['menu-admin-shortcuts-site-action_manage-blocks:admin/stanford-personal/blocks'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/stanford-personal/blocks',
    'router_path' => 'admin/stanford-personal/blocks',
    'link_title' => 'Manage Blocks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_manage-blocks:admin/stanford-personal/blocks',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-personal',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_manage-pages:admin/stanford-personal/pages
  $menu_links['menu-admin-shortcuts-site-action_manage-pages:admin/stanford-personal/pages'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/stanford-personal/pages',
    'router_path' => 'admin/stanford-personal/pages',
    'link_title' => 'Manage Pages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_manage-pages:admin/stanford-personal/pages',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-personal',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_manage-profile:admin/stanford-personal/profile
  $menu_links['menu-admin-shortcuts-site-action_manage-profile:admin/stanford-personal/profile'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/stanford-personal/profile',
    'router_path' => 'admin/stanford-personal/profile',
    'link_title' => 'Manage Profile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_manage-profile:admin/stanford-personal/profile',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-personal',
  );
  // Exported menu link: menu-admin-shortcuts-site-action_site-actions:admin/stanford-personal
  $menu_links['menu-admin-shortcuts-site-action_site-actions:admin/stanford-personal'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/stanford-personal',
    'router_path' => 'admin',
    'link_title' => 'Site Actions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-admin-shortcuts-site-action_site-actions:admin/stanford-personal',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Change Site Settings');
  t('Customize Design');
  t('Get Help');
  t('Home');
  t('Manage Blocks');
  t('Manage Pages');
  t('Manage Profile');
  t('Site Actions');


  return $menu_links;
}
