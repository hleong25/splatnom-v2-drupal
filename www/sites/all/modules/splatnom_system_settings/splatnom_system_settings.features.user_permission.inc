<?php
/**
 * @file
 * splatnom_system_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function splatnom_system_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create new_restaurant_menu content'.
  $permissions['create new_restaurant_menu content'] = array(
    'name' => 'create new_restaurant_menu content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own new_restaurant_menu content'.
  $permissions['delete own new_restaurant_menu content'] = array(
    'name' => 'delete own new_restaurant_menu content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own new_restaurant_menu content'.
  $permissions['edit own new_restaurant_menu content'] = array(
    'name' => 'edit own new_restaurant_menu content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
