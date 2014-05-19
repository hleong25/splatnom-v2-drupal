<?php
/**
 * @file
 * splatnom_content_types.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function splatnom_content_types_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-81ea0fa54c0deb2eeaa6b37a017d4667'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => '81ea0fa54c0deb2eeaa6b37a017d4667',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'splatnom_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'splatnom_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
