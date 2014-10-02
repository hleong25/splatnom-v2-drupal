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
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'header_login';
  $fe_block_boxes->body = '<a href="/user">login</a>';

  $export['header_login'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header Logo';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'header_logo';
  $fe_block_boxes->body = '<a href="/"><div class="header-logo"></div></a>';

  $export['header_logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header Logoff';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'header_logoff';
  $fe_block_boxes->body = '<a href="/user/logout">log out</a>';

  $export['header_logoff'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header New Menu Link';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'header_new_menu_link';
  $fe_block_boxes->body = '<a href="/new-restaurant-menu/add">new menu</a>';

  $export['header_new_menu_link'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header No Logo';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'header_nologo';
  $fe_block_boxes->body = '<div class="header-nologo"></div>';

  $export['header_nologo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Links on the header';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'links_on_the_header';
  $fe_block_boxes->body = '<?php
   echo date(\'m/d/Y\');
?>';

  $export['links_on_the_header'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'User profile links for admins';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'user_profile_links_for_admins';
  $fe_block_boxes->body = '<ul>
  <li><a href="/menu/add">Add new menu</a></li>
  <li><a href="/admin/content">Show Content</a></li>
</ul>';

  $export['user_profile_links_for_admins'] = $fe_block_boxes;

  return $export;
}
