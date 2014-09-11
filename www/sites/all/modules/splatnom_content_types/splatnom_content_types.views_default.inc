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
  $view->name = 'er_restaurant_menu_items';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'ER Restaurant Menu Items';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field collection item: Entity with the Menu Item (field_menu_item) */
  $handler->display->display_options['relationships']['field_menu_item_field_collection_item']['id'] = 'field_menu_item_field_collection_item';
  $handler->display->display_options['relationships']['field_menu_item_field_collection_item']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_menu_item_field_collection_item']['field'] = 'field_menu_item_field_collection_item';
  $handler->display->display_options['relationships']['field_menu_item_field_collection_item']['required'] = TRUE;
  /* Relationship: Field collection item: Entity with the Menu Section (field_menu_section) */
  $handler->display->display_options['relationships']['field_menu_section_node']['id'] = 'field_menu_section_node';
  $handler->display->display_options['relationships']['field_menu_section_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_menu_section_node']['field'] = 'field_menu_section_node';
  $handler->display->display_options['relationships']['field_menu_section_node']['relationship'] = 'field_menu_item_field_collection_item';
  $handler->display->display_options['relationships']['field_menu_section_node']['required'] = TRUE;
  /* Field: Field collection item: Menu Item Name */
  $handler->display->display_options['fields']['field_menu_item_name']['id'] = 'field_menu_item_name';
  $handler->display->display_options['fields']['field_menu_item_name']['table'] = 'field_data_field_menu_item_name';
  $handler->display->display_options['fields']['field_menu_item_name']['field'] = 'field_menu_item_name';
  $handler->display->display_options['fields']['field_menu_item_name']['label'] = '';
  $handler->display->display_options['fields']['field_menu_item_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Menu Section Title */
  $handler->display->display_options['fields']['field_menu_section_title']['id'] = 'field_menu_section_title';
  $handler->display->display_options['fields']['field_menu_section_title']['table'] = 'field_data_field_menu_section_title';
  $handler->display->display_options['fields']['field_menu_section_title']['field'] = 'field_menu_section_title';
  $handler->display->display_options['fields']['field_menu_section_title']['relationship'] = 'field_menu_item_field_collection_item';
  $handler->display->display_options['fields']['field_menu_section_title']['label'] = '';
  $handler->display->display_options['fields']['field_menu_section_title']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_menu_section_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = '// sample url: http://splatnom.local:89/entityreference/autocomplete/single/field_taggit_image_to_item/field_collection_item/field_menu_images/23
if ((arg(0) == \'entityreference\') && (arg(1) == \'autocomplete\'))
{
  // if it\'s an entityreference and autocomplete
  if (arg(5) == \'field_menu_images\')
  {
    // if the 5th item is \'field_menu_images\', then the next arg is the field collection id
    $er_id = arg(6);
    $fci = entity_load_single(\'field_collection_item\', $er_id);
    $node = $fci->hostEntity();
    return $node->nid;
  }
}
return \'all\';';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_menu_item_name' => 'field_menu_item_name',
    'field_menu_section_title' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['er_restaurant_menu_items'] = $view;

  $view = new view();
  $view->name = 'restaurant_menu_images_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Restaurant Menu Images Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field collection item: Entity with the Menu Images (field_menu_images) */
  $handler->display->display_options['relationships']['field_menu_images_node']['id'] = 'field_menu_images_node';
  $handler->display->display_options['relationships']['field_menu_images_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_menu_images_node']['field'] = 'field_menu_images_node';
  $handler->display->display_options['relationships']['field_menu_images_node']['required'] = TRUE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_menu_images_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_menu_images_node';
  /* Field: Field collection item: Menu Image Item */
  $handler->display->display_options['fields']['field_menu_image_item']['id'] = 'field_menu_image_item';
  $handler->display->display_options['fields']['field_menu_image_item']['table'] = 'field_data_field_menu_image_item';
  $handler->display->display_options['fields']['field_menu_image_item']['field'] = 'field_menu_image_item';
  $handler->display->display_options['fields']['field_menu_image_item']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_menu_image_item']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'file',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_menu_images_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['item_id']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';

  /* Display: Preview menu images */
  $handler = $view->new_display('block', 'Preview menu images', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gallery';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="<?php print request_uri(); ?>/images">View more</a>';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field collection item: Entity with the Menu Images (field_menu_images) */
  $handler->display->display_options['relationships']['field_menu_images_node']['id'] = 'field_menu_images_node';
  $handler->display->display_options['relationships']['field_menu_images_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_menu_images_node']['field'] = 'field_menu_images_node';
  $handler->display->display_options['relationships']['field_menu_images_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_menu_images_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Menu Image Item */
  $handler->display->display_options['fields']['field_menu_image_item']['id'] = 'field_menu_image_item';
  $handler->display->display_options['fields']['field_menu_image_item']['table'] = 'field_data_field_menu_image_item';
  $handler->display->display_options['fields']['field_menu_image_item']['field'] = 'field_menu_image_item';
  $handler->display->display_options['fields']['field_menu_image_item']['label'] = '';
  $handler->display->display_options['fields']['field_menu_image_item']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_menu_image_item']['alter']['path'] = 'node/[nid]/images/[item_id]';
  $handler->display->display_options['fields']['field_menu_image_item']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_menu_image_item']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_menu_image_item']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_menu_images_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: All images */
  $handler = $view->new_display('page', 'All images', 'page_1');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Go back to <?php print l(\'%1\', \'node/[nid]\', array(\'html\' => TRUE)); ?>.';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_menu_images_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['label'] = '';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Menu Image Item */
  $handler->display->display_options['fields']['field_menu_image_item']['id'] = 'field_menu_image_item';
  $handler->display->display_options['fields']['field_menu_image_item']['table'] = 'field_data_field_menu_image_item';
  $handler->display->display_options['fields']['field_menu_image_item']['field'] = 'field_menu_image_item';
  $handler->display->display_options['fields']['field_menu_image_item']['label'] = '';
  $handler->display->display_options['fields']['field_menu_image_item']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_menu_image_item']['alter']['path'] = 'node/[nid]/images/[item_id]';
  $handler->display->display_options['fields']['field_menu_image_item']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_menu_image_item']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_menu_image_item']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_menu_images_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'node/%/images';

  /* Display: Selected image attatchment */
  $handler = $view->new_display('attachment', 'Selected image attatchment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Menu Image Item */
  $handler->display->display_options['fields']['field_menu_image_item']['id'] = 'field_menu_image_item';
  $handler->display->display_options['fields']['field_menu_image_item']['table'] = 'field_data_field_menu_image_item';
  $handler->display->display_options['fields']['field_menu_image_item']['field'] = 'field_menu_image_item';
  $handler->display->display_options['fields']['field_menu_image_item']['label'] = '';
  $handler->display->display_options['fields']['field_menu_image_item']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_menu_image_item']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_menu_image_item']['settings'] = array(
    'image_style' => 'large',
    'image_link' => 'file',
  );
  /* Field: Field collection item: ER Restaurant Menu Item */
  $handler->display->display_options['fields']['field_er_restaurant_menu_item']['id'] = 'field_er_restaurant_menu_item';
  $handler->display->display_options['fields']['field_er_restaurant_menu_item']['table'] = 'field_data_field_er_restaurant_menu_item';
  $handler->display->display_options['fields']['field_er_restaurant_menu_item']['field'] = 'field_er_restaurant_menu_item';
  $handler->display->display_options['fields']['field_er_restaurant_menu_item']['label'] = '';
  $handler->display->display_options['fields']['field_er_restaurant_menu_item']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_er_restaurant_menu_item']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_er_restaurant_menu_item']['settings'] = array(
    'view_mode' => 'view_simple_menu_item',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_er_restaurant_menu_item']['delta_offset'] = '0';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block' => 0,
    'block_1' => 0,
  );
  $export['restaurant_menu_images_gallery'] = $view;

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
  $handler->display->display_options['block_caching'] = '4';
  $export['restaurant_menu_navigation'] = $view;

  return $export;
}
