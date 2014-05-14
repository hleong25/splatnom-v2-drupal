<?php
/**
 * @file
 * splatnom_content_types.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function splatnom_content_types_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'restaurant_menu_navigation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Restaurant Menu Navigation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Menu';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field collection item: Entity with the Menu Section (field_menu_section) */
  $handler->display->display_options['relationships']['field_menu_section_node']['id'] = 'field_menu_section_node';
  $handler->display->display_options['relationships']['field_menu_section_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_menu_section_node']['field'] = 'field_menu_section_node';
  $handler->display->display_options['relationships']['field_menu_section_node']['required'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Menu Section Title */
  $handler->display->display_options['fields']['field_menu_section_title']['id'] = 'field_menu_section_title';
  $handler->display->display_options['fields']['field_menu_section_title']['table'] = 'field_data_field_menu_section_title';
  $handler->display->display_options['fields']['field_menu_section_title']['field'] = 'field_menu_section_title';
  $handler->display->display_options['fields']['field_menu_section_title']['label'] = '';
  $handler->display->display_options['fields']['field_menu_section_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_menu_section_title']['alter']['path'] = '#[item_id]-[field_menu_section_title]';
  $handler->display->display_options['fields']['field_menu_section_title']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_menu_section_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['restaurant_menu_navigation'] = $view;

  return $export;
}
