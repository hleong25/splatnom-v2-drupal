<?php
/**
 * @file
 * splatnom_theme_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function splatnom_theme_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}