<?php

/**
* Implements hook_views_default_views().
**/
function splatnom_views_export_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'splatnom_views_export'). '/views', '/.view/');
  foreach ($files as $filepath => $file) {
    require $filepath;
    if (isset($view)) {
      $views[$view->name] = $view;
    }
  }
  return $views;
}
