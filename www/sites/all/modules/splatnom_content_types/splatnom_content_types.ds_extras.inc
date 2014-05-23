<?php
/**
 * @file
 * splatnom_content_types.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function splatnom_content_types_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'restaurant_menu_images_gallery-block-fields';
  $ds_vd->label = 'Restaurant_menu_images_gallery: Preview menu images (Fields)';
  $export['restaurant_menu_images_gallery-block-fields'] = $ds_vd;

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'restaurant_menu_images_gallery-page_1-fields';
  $ds_vd->label = 'Restaurant_menu_images_gallery: All images (Fields)';
  $export['restaurant_menu_images_gallery-page_1-fields'] = $ds_vd;

  return $export;
}
