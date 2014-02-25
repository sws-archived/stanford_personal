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

  // Exported menu link: menu-admin-shortcuts-add-feature:admin/stanford-jumpstart/features
  $menu_links['menu-admin-shortcuts-add-feature:admin/stanford-jumpstart/features'] = array(
    'menu_name' => 'menu-admin-shortcuts-add-feature',
    'link_path' => 'admin/stanford-jumpstart/features',
    'router_path' => 'admin/stanford-jumpstart/features',
    'link_title' => 'Add Features',
    'options' => array(
      'attributes' => array(
        'title' => 'Add features to your site',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-admin-shortcuts-get-help:admin/stanford-jumpstart
  $menu_links['menu-admin-shortcuts-get-help:admin/stanford-jumpstart'] = array(
    'menu_name' => 'menu-admin-shortcuts-get-help',
    'link_path' => 'admin/stanford-jumpstart',
    'router_path' => 'admin/stanford-jumpstart',
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
  // Exported menu link: menu-admin-shortcuts-ready-to-la:admin/stanford-jumpstart/launch-checklist
  $menu_links['menu-admin-shortcuts-ready-to-la:admin/stanford-jumpstart/launch-checklist'] = array(
    'menu_name' => 'menu-admin-shortcuts-ready-to-la',
    'link_path' => 'admin/stanford-jumpstart/launch-checklist',
    'router_path' => 'admin/stanford-jumpstart/launch-checklist',
    'link_title' => 'Ready to Launch?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
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
    'parent_path' => 'admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action:admin/manage
  $menu_links['menu-admin-shortcuts-site-action:admin/manage'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/manage',
    'router_path' => 'admin/manage',
    'link_title' => 'Manage Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action:admin/structure/taxonomy_manager/voc
  $menu_links['menu-admin-shortcuts-site-action:admin/structure/taxonomy_manager/voc'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/structure/taxonomy_manager/voc',
    'router_path' => 'admin/structure/taxonomy_manager/voc',
    'link_title' => 'Manage Taxonomies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action:admin/people
  $menu_links['menu-admin-shortcuts-site-action:admin/people'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/people',
    'router_path' => 'admin/people',
    'link_title' => 'Manage Users',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage all site users, Add/remove permissions',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => 'admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action:admin/stanford-jumpstart
  $menu_links['menu-admin-shortcuts-site-action:admin/stanford-jumpstart'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/stanford-jumpstart',
    'router_path' => 'admin/stanford-jumpstart',
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
  // Exported menu link: menu-admin-shortcuts-site-action:admin/structure/menu/manage/main-menu
  $menu_links['menu-admin-shortcuts-site-action:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Edit Main Menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Edit the links in your Main Menu',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => 'admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action:node/add/stanford-event
  $menu_links['menu-admin-shortcuts-site-action:node/add/stanford-event'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-event',
    'router_path' => 'node/add/stanford-event',
    'link_title' => 'Add Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => 'admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action:node/add/stanford-news-item
  $menu_links['menu-admin-shortcuts-site-action:node/add/stanford-news-item'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-news-item',
    'router_path' => 'node/add/stanford-news-item',
    'link_title' => 'Add News Item',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => 'admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action:node/add/stanford-page
  $menu_links['menu-admin-shortcuts-site-action:node/add/stanford-page'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-page',
    'router_path' => 'node/add/stanford-page',
    'link_title' => 'Add Page',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => 'admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action:node/add/stanford-person
  $menu_links['menu-admin-shortcuts-site-action:node/add/stanford-person'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-person',
    'router_path' => 'node/add/stanford-person',
    'link_title' => 'Add Person',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => 'admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action:node/add/stanford-publication
  $menu_links['menu-admin-shortcuts-site-action:node/add/stanford-publication'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'node/add/stanford-publication',
    'router_path' => 'node/add/stanford-publication',
    'link_title' => 'Add Publication',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => 'admin/stanford-jumpstart',
  );
  // Exported menu link: menu-admin-shortcuts-site-action:node/add/stanford-publication
  $menu_links['menu-admin-shortcuts-site-action:admin/stanford/jumpstart/shortcuts/clear-cache'] = array(
    'menu_name' => 'menu-admin-shortcuts-site-action',
    'link_path' => 'admin/stanford/jumpstart/shortcuts/clear-cache',
    'router_path' => 'admin/stanford/jumpstart/shortcuts/clear-cache',
    'link_title' => 'Refresh Site Content',
    'options' => array(
      'attributes' => array(
        'class' => 'su-clear-cache',
        'title' => 'Refresh Site Content',
      ),
    ),
    'module' => 'stanford_personal_shortcuts',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => 'admin/stanford-jumpstart',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Event');
  t('Add Features');
  t('Add News Item');
  t('Add Page');
  t('Add Person');
  t('Add Publication');
  t('Edit Main Menu');
  t('Edit Site Name');
  t('Get Help');
  t('Home');
  t('Manage Content');
  t('Manage Users');
  t('Ready to Launch?');
  t('Refresh Site Content');
  t('Site Actions');

  return $menu_links;
}
