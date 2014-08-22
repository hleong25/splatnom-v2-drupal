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
  $fe_block_boxes->info = 'Front page search';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'front_page_search';
  $fe_block_boxes->body = '<form id="views-exposed-form-proximity-search-for-restaurant-menu-page" class="views-exposed-form-proximity-search-for-restaurant-menu-page" action="/search/menus" method="get" accept-charset="UTF-8">
    <div>
        <div class="views-exposed-form">
            <div class="views-exposed-widgets clearfix">
                <div id="edit-query-wrapper" class="views-exposed-widget views-widget-filter-field_menu_item_name_value">
                    <div class="views-widget">
                        <div class="form-item form-type-textfield form-item-query">
                            <input id="edit-query" name="query" value="" size="30" maxlength="128" class="form-text" type="text">
                        </div>
                    </div>
                    <div class="description">Look for \'fish tacos\' or \'Japanese\'</div>
                </div>
                <div id="edit-location-wrapper" class="views-exposed-widget views-widget-filter-field_geofield_distance">
                    <div class="views-widget">
                        <div class="geofield-proximity-field-wrapper clearfix"><div class="form-item form-type-geofield-proximity">
                                <div id="edit-location" class="clearfix"><div class="form-item form-type-textfield form-item-location-origin">
                                        <label class="element-invisible" for="edit-location-origin">Origin </label>
                                        <input class="geofield-proximity-origin form-text" id="edit-location-origin" name="location[origin]" value="" size="60" maxlength="128" type="text">
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                    <div class="description">Location or Zip Code</div>
                </div>
                <div class="views-exposed-widget views-submit-button">
                    <input id="edit-submit-proximity-search-for-restaurant-menu" name="" value="Search" class="form-submit" type="submit">
                </div>
            </div>
        </div>
    </div>
</form>';

  $export['front_page_search'] = $fe_block_boxes;

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
</ul>';

  $export['user_profile_links_for_admins'] = $fe_block_boxes;

  return $export;
}
