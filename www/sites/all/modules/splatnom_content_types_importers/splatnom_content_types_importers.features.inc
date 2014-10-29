<?php
/**
 * @file
 * splatnom_content_types_importers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function splatnom_content_types_importers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
