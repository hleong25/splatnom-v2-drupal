<?php
/**
 * @file
 * splatnom_content_types_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function splatnom_content_types_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'import_cvs_as_menu_items';
  $feeds_importer->config = array(
    'name' => 'Import CVS as Menu Items',
    'description' => 'restaurant_menu > field_menu_section > field_menu_item',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsFieldCollectionProcessor',
      'config' => array(
        'field_name' => 'field_menu_item',
        'host_entity_type' => 'field_collection_item',
        'is_field' => 0,
        'guid_field_name' => 'item_id',
        'identifier_field_name' => 'field_menu_item_name',
        'mappings' => array(
          0 => array(
            'source' => 'section id',
            'target' => 'host_entity_guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'item name',
            'target' => 'identifier_field',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'item name',
            'target' => 'field_menu_item_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'notes',
            'target' => 'field_menu_item_notes',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'divider left',
            'target' => 'field_menu_item_is_divider_left',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'divder center',
            'target' => 'field_menu_item_is_divider_centr',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'divider right',
            'target' => 'field_menu_item_is_divider_right',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'is spicy',
            'target' => 'field_menu_item_is_spicy',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'is vegetarian',
            'target' => 'field_menu_item_is_vegetarian',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'field_menu_item',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['import_cvs_as_menu_items'] = $feeds_importer;

  return $export;
}
