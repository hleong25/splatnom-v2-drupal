<?php
/**
 * @file
 * splatnom_theme_settings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function splatnom_theme_settings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'proximity_search_for_restaurant_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Proximity search for Restaurant Menu';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Menu Location (field_menu_location) */
  $handler->display->display_options['relationships']['field_menu_location_value']['id'] = 'field_menu_location_value';
  $handler->display->display_options['relationships']['field_menu_location_value']['table'] = 'field_data_field_menu_location';
  $handler->display->display_options['relationships']['field_menu_location_value']['field'] = 'field_menu_location_value';
  $handler->display->display_options['relationships']['field_menu_location_value']['label'] = 'Link from field_menu_location';
  $handler->display->display_options['relationships']['field_menu_location_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_menu_location_value']['delta'] = '-1';
  /* Relationship: Content: Menu Section (field_menu_section) */
  $handler->display->display_options['relationships']['field_menu_section_value']['id'] = 'field_menu_section_value';
  $handler->display->display_options['relationships']['field_menu_section_value']['table'] = 'field_data_field_menu_section';
  $handler->display->display_options['relationships']['field_menu_section_value']['field'] = 'field_menu_section_value';
  $handler->display->display_options['relationships']['field_menu_section_value']['label'] = 'Link from field_menu_section';
  $handler->display->display_options['relationships']['field_menu_section_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_menu_section_value']['delta'] = '-1';
  /* Relationship: Field collection item: Menu Item (field_menu_item) */
  $handler->display->display_options['relationships']['field_menu_item_value']['id'] = 'field_menu_item_value';
  $handler->display->display_options['relationships']['field_menu_item_value']['table'] = 'field_data_field_menu_item';
  $handler->display->display_options['relationships']['field_menu_item_value']['field'] = 'field_menu_item_value';
  $handler->display->display_options['relationships']['field_menu_item_value']['relationship'] = 'field_menu_section_value';
  $handler->display->display_options['relationships']['field_menu_item_value']['label'] = 'Link from field_menu_section to field_menu_item';
  $handler->display->display_options['relationships']['field_menu_item_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_menu_item_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field collection item: Menu Location Address */
  $handler->display->display_options['fields']['field_menu_location_address']['id'] = 'field_menu_location_address';
  $handler->display->display_options['fields']['field_menu_location_address']['table'] = 'field_data_field_menu_location_address';
  $handler->display->display_options['fields']['field_menu_location_address']['field'] = 'field_menu_location_address';
  $handler->display->display_options['fields']['field_menu_location_address']['relationship'] = 'field_menu_location_value';
  $handler->display->display_options['fields']['field_menu_location_address']['label'] = '';
  $handler->display->display_options['fields']['field_menu_location_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_menu_location_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_menu_location_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Sort criterion: Field collection item: Menu Location Geocode (field_menu_location_geocode) - proximity */
  $handler->display->display_options['sorts']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['table'] = 'field_data_field_menu_location_geocode';
  $handler->display->display_options['sorts']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['relationship'] = 'field_menu_location_value';
  $handler->display->display_options['sorts']['field_geofield_distance']['source'] = 'exposed_geofield_filter';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_menu_location_geocode';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_menu_location_geocode';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'restaurant_menu' => 'restaurant_menu',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Menu Item Name (field_menu_item_name) */
  $handler->display->display_options['filters']['field_menu_item_name_value']['id'] = 'field_menu_item_name_value';
  $handler->display->display_options['filters']['field_menu_item_name_value']['table'] = 'field_data_field_menu_item_name';
  $handler->display->display_options['filters']['field_menu_item_name_value']['field'] = 'field_menu_item_name_value';
  $handler->display->display_options['filters']['field_menu_item_name_value']['relationship'] = 'field_menu_item_value';
  $handler->display->display_options['filters']['field_menu_item_name_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_menu_item_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_item_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_menu_item_name_value']['expose']['operator_id'] = 'field_menu_item_name_value_op';
  $handler->display->display_options['filters']['field_menu_item_name_value']['expose']['description'] = 'Look for \'fish tacos\' or \'Japanese\' ';
  $handler->display->display_options['filters']['field_menu_item_name_value']['expose']['operator'] = 'field_menu_item_name_value_op';
  $handler->display->display_options['filters']['field_menu_item_name_value']['expose']['identifier'] = 'query';
  $handler->display->display_options['filters']['field_menu_item_name_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_menu_item_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field collection item: Menu Location Geocode (field_menu_location_geocode) - proximity */
  $handler->display->display_options['filters']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['table'] = 'field_data_field_menu_location_geocode';
  $handler->display->display_options['filters']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['filters']['field_geofield_distance']['relationship'] = 'field_menu_location_value';
  $handler->display->display_options['filters']['field_geofield_distance']['operator'] = '<=';
  $handler->display->display_options['filters']['field_geofield_distance']['value'] = array(
    'distance' => '15',
    'distance2' => 200,
    'unit' => '3959',
    'origin' => '',
  );
  $handler->display->display_options['filters']['field_geofield_distance']['group'] = 1;
  $handler->display->display_options['filters']['field_geofield_distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator_id'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['description'] = 'Location or Zip Code';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['operator'] = 'field_geofield_distance_op';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['identifier'] = 'location';
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_geofield_distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_geofield_distance']['source'] = 'geocoder';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_menu_location_geocode';
  $handler->display->display_options['filters']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_menu_location_geocode';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search/menus';
  $export['proximity_search_for_restaurant_menu'] = $view;

  return $export;
}
