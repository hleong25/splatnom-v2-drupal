<?php
/**
 * @file
 * splatnom_system_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function splatnom_system_settings_user_default_roles() {
  $roles = array();

  // Exported role: menu editor.
  $roles['menu editor'] = array(
    'name' => 'menu editor',
    'weight' => 3,
  );

  return $roles;
}
