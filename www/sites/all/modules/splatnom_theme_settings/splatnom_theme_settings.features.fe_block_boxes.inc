<?php
/**
 * @file
 * splatnom_theme_settings.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function splatnom_theme_settings_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header Login';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'header_login';
  $fe_block_boxes->body = '<a href="/user">login</a>';

  $export['header_login'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header Logoff';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'header_logoff';
  $fe_block_boxes->body = '<a href="/user/logout">log out</a>';

  $export['header_logoff'] = $fe_block_boxes;

  return $export;
}
