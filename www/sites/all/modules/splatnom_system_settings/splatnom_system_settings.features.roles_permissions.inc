<?php
/**
 * @file
 * splatnom_system_settings.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function splatnom_system_settings_default_roles_permissions() {
  $roles = array();

  // Exported role: menu editor
  $roles['menu editor'] = array(
    'name' => 'menu editor',
    'weight' => 3,
    'permissions' => array(
      'access content' => TRUE,
      'edit any restaurant_menu content' => TRUE,
      'edit own restaurant_menu content' => TRUE,
      'use text format ds_code' => TRUE,
      'use text format filtered_html' => TRUE,
      'use text format full_html' => TRUE,
      'use text format php_code' => TRUE,
      'view own unpublished content' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  return $roles;
}
