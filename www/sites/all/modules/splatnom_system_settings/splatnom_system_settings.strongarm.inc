<?php
/**
 * @file
 * splatnom_system_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function splatnom_system_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_restaurant_menu_pattern';
  $strongarm->value = 'menu/[node:title]';
  $export['pathauto_node_restaurant_menu_pattern'] = $strongarm;

  return $export;
}
