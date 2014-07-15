<?php
/**
 * @file
 * splatnom_content_types.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function splatnom_content_types_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header New Menu Link';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'header_new_menu_link';
  $fe_block_boxes->body = '<a href="/new-restaurant-menu/add">new menu</a>';

  $export['header_new_menu_link'] = $fe_block_boxes;

  return $export;
}
