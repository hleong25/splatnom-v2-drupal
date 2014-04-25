<?php
/**
 * @file
 * splatnom_theme_settings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function splatnom_theme_settings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-content-type-restaurant-menu';
  $context->description = 'The layout for the content type restaurant menu';
  $context->tag = 'layout';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'restaurant_menu' => 'restaurant_menu',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'restaurant-menu',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The layout for the content type restaurant menu');
  t('layout');
  $export['layout-content-type-restaurant-menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-front-page';
  $context->description = 'The layout of the front page';
  $context->tag = 'layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'home',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The layout of the front page');
  t('layout');
  $export['layout-front-page'] = $context;

  return $export;
}
