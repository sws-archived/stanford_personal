<?php
/**
 * @file
 * stanford_personal_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function stanford_personal_roles_user_default_roles() {
  $roles = array();

  // Exported role: site owner.
  $roles['site owner'] = array(
    'name' => 'site owner',
    'weight' => '7',
  );

  return $roles;
}
