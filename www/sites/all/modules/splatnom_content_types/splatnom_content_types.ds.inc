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
  $ds_fieldsetting->id = 'ds_views|restaurant_menu_images_gallery-block-fields|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'restaurant_menu_images_gallery-block-fields';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_menu_image_item' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|restaurant_menu_images_gallery-block-fields|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|restaurant_menu_images_gallery-page_1-fields|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'restaurant_menu_images_gallery-page_1-fields';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_menu_image_item' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|restaurant_menu_images_gallery-page_1-fields|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_menu_item|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_menu_item';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'menu_item_attribute_images' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['field_collection_item|field_menu_item|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_menu_section|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_menu_section';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'block_menu_section_anchor' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['field_collection_item|field_menu_section|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|restaurant_menu|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'restaurant_menu';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'block_restaurant_menu_images_gal' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'block_restaurant_menu_navigation' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'block_title_with_self_link' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'changed_date' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'ds_post_date_custom_medium_date_time',
    ),
  );
  $export['node|restaurant_menu|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function splatnom_content_types_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'block_menu_section_anchor';
  $ds_field->label = 'Block Menu Section Anchor';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div id="[field_collection_item:item-id]-[field_collection_item:field-menu-section-title]"></div>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['block_menu_section_anchor'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'block_restaurant_menu_images_gal';
  $ds_field->label = 'Block Restaurant Menu Images Gallery';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|0bb00382d381efc9cfeb899a45d11ad2',
    'block_render' => '1',
  );
  $export['block_restaurant_menu_images_gal'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'block_restaurant_menu_navigation';
  $ds_field->label = 'Block Restaurant Menu Navigation';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|81ea0fa54c0deb2eeaa6b37a017d4667',
    'block_render' => '1',
  );
  $export['block_restaurant_menu_navigation'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'block_title_with_self_link';
  $ds_field->label = 'Block Title with self link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h2><a href="[current-page:url]">[current-page:title]</a></h2>',
      'format' => 'php_code',
    ),
    'use_token' => 1,
  );
  $export['block_title_with_self_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'menu_item_attribute_images';
  $ds_field->label = 'Menu Item Attribute Images';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
$is_spicy = $entity->field_menu_item_is_spicy[\'und\'][0][\'value\'];
$is_veggie = $entity->field_menu_item_is_vegetarian[\'und\'][0][\'value\'];

if ($is_spicy) print \'<span class="icon is-spicy">&nbsp;</span>\';
if ($is_veggie) print \'<span class="icon is-veggie">&nbsp;</span>\';
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['menu_item_attribute_images'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function splatnom_content_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|restaurant_menu_images_gallery-block-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'restaurant_menu_images_gallery-block-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_menu_image_item',
      ),
    ),
    'fields' => array(
      'field_menu_image_item' => 'ds_content',
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
  $export['ds_views|restaurant_menu_images_gallery-block-fields|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|restaurant_menu_images_gallery-page_1-fields|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'restaurant_menu_images_gallery-page_1-fields';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_menu_image_item',
      ),
    ),
    'fields' => array(
      'field_menu_image_item' => 'ds_content',
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
  $export['ds_views|restaurant_menu_images_gallery-page_1-fields|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_menu_item|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_menu_item';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'middle' => array(
        0 => 'field_menu_item_name',
        1 => 'menu_item_attribute_images',
      ),
      'footer' => array(
        2 => 'field_menu_item_notes',
      ),
    ),
    'fields' => array(
      'field_menu_item_name' => 'middle',
      'menu_item_attribute_images' => 'middle',
      'field_menu_item_notes' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_menu_item|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_menu_section|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_menu_section';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'block_menu_section_anchor',
        1 => 'field_menu_section_title',
        2 => 'field_menu_section_notes',
        3 => 'field_menu_item',
      ),
    ),
    'fields' => array(
      'block_menu_section_anchor' => 'ds_content',
      'field_menu_section_title' => 'ds_content',
      'field_menu_section_notes' => 'ds_content',
      'field_menu_item' => 'ds_content',
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
  $export['field_collection_item|field_menu_section|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|restaurant_menu|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'restaurant_menu';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'block_title_with_self_link',
        1 => 'field_menu_notes',
        2 => 'field_menu_location',
      ),
      'middle' => array(
        3 => 'field_menu_section',
      ),
      'right' => array(
        4 => 'block_restaurant_menu_navigation',
        5 => 'block_restaurant_menu_images_gal',
      ),
      'footer' => array(
        6 => 'changed_date',
      ),
    ),
    'fields' => array(
      'block_title_with_self_link' => 'header',
      'field_menu_notes' => 'header',
      'field_menu_location' => 'header',
      'field_menu_section' => 'middle',
      'block_restaurant_menu_navigation' => 'right',
      'block_restaurant_menu_images_gal' => 'right',
      'changed_date' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
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
