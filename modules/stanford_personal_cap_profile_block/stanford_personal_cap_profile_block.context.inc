<?php
/**
 * @file
 * stanford_personal_cap_profile_block.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_personal_cap_profile_block_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'profile_block';
  $context->description = 'Profile Block';
  $context->tag = 'Profile Block';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-profile_blocks-block' => array(
          'module' => 'views',
          'delta' => 'profile_blocks-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Profile Block');
  $export['profile_block'] = $context;

  return $export;
}
