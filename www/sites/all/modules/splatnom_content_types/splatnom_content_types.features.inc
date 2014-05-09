<?php
/**
 * @file
 * splatnom_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function splatnom_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function splatnom_content_types_node_info() {
  $items = array(
    'restaurant_menu' => array(
      'name' => t('Restaurant Menu'),
      'base' => 'node_content',
      'description' => t('Menu for restaurants'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
