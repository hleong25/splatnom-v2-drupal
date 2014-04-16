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
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'header_links',
          'weight' => '-10',
        ),
      ),
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
