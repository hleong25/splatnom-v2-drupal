<?php
/**
 * @file
 * splatnom_content_types.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function splatnom_content_types_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|restaurant_menu|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'restaurant_menu';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|restaurant_menu|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function splatnom_content_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|restaurant_menu|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'restaurant_menu';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_menu_notes',
        2 => 'field_menu_location',
        3 => 'field_menu_section',
        4 => 'field_menu_images',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_menu_notes' => 'ds_content',
      'field_menu_location' => 'ds_content',
      'field_menu_section' => 'ds_content',
      'field_menu_images' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|restaurant_menu|default'] = $ds_layout;

  return $export;
}
