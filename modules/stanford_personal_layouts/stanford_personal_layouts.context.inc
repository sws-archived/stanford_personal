<?php
/**
 * @file
 * stanford_personal_layouts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function stanford_personal_layouts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_pages_but_homepage';
  $context->description = 'All pages but the home page';
  $context->tag = 'Sub-pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'stanford_personal_layouts-2' => array(
          'module' => 'menu_block',
          'delta' => 'stanford_personal_layouts-2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All pages but the home page');
  t('Sub-pages');
  $export['all_pages_but_homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide - All pages';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'webauth-webauth_login_block' => array(
          'module' => 'webauth',
          'delta' => 'webauth_login_block',
          'region' => 'global_header',
          'weight' => '-10',
        ),
        'menu_block-stanford_personal_layouts-1' => array(
          'module' => 'menu_block',
          'delta' => 'stanford_personal_layouts-1',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'search_box',
          'weight' => '-10',
        ),
        'bean-jumpstart-footer-social-media--0' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-footer-social-media--0',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'bean-jumpstart-footer-contact-block' => array(
          'module' => 'bean',
          'delta' => 'jumpstart-footer-contact-block',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'bean-optional-footer-block' => array(
          'module' => 'bean',
          'delta' => 'optional-footer-block',
          'region' => 'footer',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  t('Sitewide - All pages');
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_left_sb';
  $context->description = 'Sitewide layout with a left sidebar';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-stanford-personal-sidebar-block' => array(
          'module' => 'bean',
          'delta' => 'stanford-personal-sidebar-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'bean-stanford-personal-footer-block' => array(
          'module' => 'bean',
          'delta' => 'stanford-personal-footer-block',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  t('Sitewide layout with a left sidebar');
  $export['stanford_left_sb'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_profile_left_sb';
  $context->description = 'Sitewide layout with profile and social blocks in right (first) side bar and flexi block in left (second) sidebar';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-stanford-personal-sidebar-block' => array(
          'module' => 'bean',
          'delta' => 'stanford-personal-sidebar-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'bean-stanford-personal-footer-block' => array(
          'module' => 'bean',
          'delta' => 'stanford-personal-footer-block',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  t('Sitewide layout with profile and social blocks in right (first) side bar and flexi block in left (second) sidebar');
  $export['stanford_profile_left_sb'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_profile_right_sb';
  $context->description = 'Sitewide layout with profile and social blocks in right (second) sidebar and flexi in left (first) sidebar';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-stanford-personal-sidebar-block' => array(
          'module' => 'bean',
          'delta' => 'stanford-personal-sidebar-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'bean-stanford-personal-footer-block' => array(
          'module' => 'bean',
          'delta' => 'stanford-personal-footer-block',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  t('Sitewide layout with profile and social blocks in right (second) sidebar and flexi in left (first) sidebar');
  $export['stanford_profile_right_sb'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stanford_right_sb';
  $context->description = 'Sitewide layout with a right sidebar';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-stanford-personal-sidebar-block' => array(
          'module' => 'bean',
          'delta' => 'stanford-personal-sidebar-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'bean-stanford-personal-footer-block' => array(
          'module' => 'bean',
          'delta' => 'stanford-personal-footer-block',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  t('Sitewide layout with a right sidebar');
  $export['stanford_right_sb'] = $context;

  return $export;
}
