<?php
/**
 * @file
 * splatnom_theme_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function splatnom_theme_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-front_page_search'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'front_page_search',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'front_page_content',
        'status' => 1,
        'theme' => 'splatnom_theme',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-header_login'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'header_login',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
    ),
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
        'region' => 'header_right',
        'status' => 1,
        'theme' => 'splatnom_theme',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-header_logo'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'header_logo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'header_left',
        'status' => 1,
        'theme' => 'splatnom_theme',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-header_logoff'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'header_logoff',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'authenticated user' => 2,
    ),
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
        'region' => 'header_right',
        'status' => 1,
        'theme' => 'splatnom_theme',
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-header_new_menu_link'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'header_new_menu_link',
    'module' => 'block',
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
        'region' => 'header_right',
        'status' => 1,
        'theme' => 'splatnom_theme',
        'weight' => -16,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-header_nologo'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'header_nologo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'header_left',
        'status' => 1,
        'theme' => 'splatnom_theme',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-links_on_the_header'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'links_on_the_header',
    'module' => 'block',
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

  $export['block-user_profile_links_for_admins'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'user_profile_links_for_admins',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
    ),
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
