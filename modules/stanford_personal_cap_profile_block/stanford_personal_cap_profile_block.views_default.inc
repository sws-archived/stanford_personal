<?php
/**
 * @file
 * stanford_personal_cap_profile_block.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stanford_personal_cap_profile_block_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'profile_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profile Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Profile Photos (cap_profilephotos) */
  $handler->display->display_options['relationships']['cap_profilephotos_value']['id'] = 'cap_profilephotos_value';
  $handler->display->display_options['relationships']['cap_profilephotos_value']['table'] = 'field_data_cap_profilephotos';
  $handler->display->display_options['relationships']['cap_profilephotos_value']['field'] = 'cap_profilephotos_value';
  $handler->display->display_options['relationships']['cap_profilephotos_value']['delta'] = '-1';
  /* Relationship: Field collection item: big (cap_big) */
  $handler->display->display_options['relationships']['cap_big_value']['id'] = 'cap_big_value';
  $handler->display->display_options['relationships']['cap_big_value']['table'] = 'field_data_cap_big';
  $handler->display->display_options['relationships']['cap_big_value']['field'] = 'cap_big_value';
  $handler->display->display_options['relationships']['cap_big_value']['relationship'] = 'cap_profilephotos_value';
  $handler->display->display_options['relationships']['cap_big_value']['delta'] = '-1';
  /* Relationship: Content: Primary Contact (cap_primarycontact) */
  $handler->display->display_options['relationships']['cap_primarycontact_value']['id'] = 'cap_primarycontact_value';
  $handler->display->display_options['relationships']['cap_primarycontact_value']['table'] = 'field_data_cap_primarycontact';
  $handler->display->display_options['relationships']['cap_primarycontact_value']['field'] = 'cap_primarycontact_value';
  $handler->display->display_options['relationships']['cap_primarycontact_value']['delta'] = '-1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field collection item: height */
  $handler->display->display_options['fields']['cap_height']['id'] = 'cap_height';
  $handler->display->display_options['fields']['cap_height']['table'] = 'field_data_cap_height';
  $handler->display->display_options['fields']['cap_height']['field'] = 'cap_height';
  $handler->display->display_options['fields']['cap_height']['relationship'] = 'cap_big_value';
  $handler->display->display_options['fields']['cap_height']['label'] = '';
  $handler->display->display_options['fields']['cap_height']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cap_height']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cap_height']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: width */
  $handler->display->display_options['fields']['cap_width']['id'] = 'cap_width';
  $handler->display->display_options['fields']['cap_width']['table'] = 'field_data_cap_width';
  $handler->display->display_options['fields']['cap_width']['field'] = 'cap_width';
  $handler->display->display_options['fields']['cap_width']['relationship'] = 'cap_big_value';
  $handler->display->display_options['fields']['cap_width']['label'] = '';
  $handler->display->display_options['fields']['cap_width']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cap_width']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cap_width']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Field collection item: url */
  $handler->display->display_options['fields']['cap_url']['id'] = 'cap_url';
  $handler->display->display_options['fields']['cap_url']['table'] = 'field_data_cap_url';
  $handler->display->display_options['fields']['cap_url']['field'] = 'cap_url';
  $handler->display->display_options['fields']['cap_url']['relationship'] = 'cap_big_value';
  $handler->display->display_options['fields']['cap_url']['label'] = '';
  $handler->display->display_options['fields']['cap_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['cap_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['cap_url']['alter']['text'] = '<img src="[cap_url]" height="[cap_width]" width="[cap_height]" alt="Profile Image" title="Profile Image" class="profile-block-photo-big" />';
  $handler->display->display_options['fields']['cap_url']['element_label_colon'] = FALSE;
  /* Field: Content: CAP profile image */
  $handler->display->display_options['fields']['cap_profile_image']['id'] = 'cap_profile_image';
  $handler->display->display_options['fields']['cap_profile_image']['table'] = 'field_data_cap_profile_image';
  $handler->display->display_options['fields']['cap_profile_image']['field'] = 'cap_profile_image';
  $handler->display->display_options['fields']['cap_profile_image']['label'] = '';
  $handler->display->display_options['fields']['cap_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cap_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['cap_profile_image']['settings'] = array(
    'image_style' => 'large-profile',
    'image_link' => '',
  );
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_s_person_profile_picture']['id'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['table'] = 'field_data_field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['field'] = 'field_s_person_profile_picture';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_s_person_profile_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_s_person_profile_picture']['settings'] = array(
    'image_style' => 'large-profile',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field collection item: Email */
  $handler->display->display_options['fields']['cap_email']['id'] = 'cap_email';
  $handler->display->display_options['fields']['cap_email']['table'] = 'field_data_cap_email';
  $handler->display->display_options['fields']['cap_email']['field'] = 'cap_email';
  $handler->display->display_options['fields']['cap_email']['relationship'] = 'cap_primarycontact_value';
  $handler->display->display_options['fields']['cap_email']['label'] = '';
  $handler->display->display_options['fields']['cap_email']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['cap_email']['alter']['path'] = 'mailto:[cap_email-value]';
  $handler->display->display_options['fields']['cap_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cap_email']['hide_empty'] = TRUE;
  /* Field: Field collection item: Phone Numbers */
  $handler->display->display_options['fields']['cap_phonenumbers']['id'] = 'cap_phonenumbers';
  $handler->display->display_options['fields']['cap_phonenumbers']['table'] = 'field_data_cap_phonenumbers';
  $handler->display->display_options['fields']['cap_phonenumbers']['field'] = 'cap_phonenumbers';
  $handler->display->display_options['fields']['cap_phonenumbers']['relationship'] = 'cap_primarycontact_value';
  $handler->display->display_options['fields']['cap_phonenumbers']['label'] = '';
  $handler->display->display_options['fields']['cap_phonenumbers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['cap_phonenumbers']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['cap_phonenumbers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['cap_phonenumbers']['multi_type'] = 'ul';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_s_person_email']['id'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['table'] = 'field_data_field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['field'] = 'field_s_person_email';
  $handler->display->display_options['fields']['field_s_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_email']['element_label_colon'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_s_person_phone_display']['id'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['table'] = 'field_data_field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['field'] = 'field_s_person_phone_display';
  $handler->display->display_options['fields']['field_s_person_phone_display']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_phone_display']['element_label_colon'] = FALSE;
  /* Field: Content: Mail Code */
  $handler->display->display_options['fields']['field_s_person_mail_code']['id'] = 'field_s_person_mail_code';
  $handler->display->display_options['fields']['field_s_person_mail_code']['table'] = 'field_data_field_s_person_mail_code';
  $handler->display->display_options['fields']['field_s_person_mail_code']['field'] = 'field_s_person_mail_code';
  $handler->display->display_options['fields']['field_s_person_mail_code']['label'] = '';
  $handler->display->display_options['fields']['field_s_person_mail_code']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'stanford_person' => 'stanford_person',
    'cap_stanford_profile' => 'cap_stanford_profile',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['profile_blocks'] = $view;

  return $export;
}
