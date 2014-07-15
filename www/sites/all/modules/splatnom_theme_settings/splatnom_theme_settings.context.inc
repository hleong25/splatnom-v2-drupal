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
  $context->name = 'layout-default-splatnom';
  $context->description = 'The default layout for everything';
  $context->tag = 'layout';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        '~*' => '~*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'default-splatnom',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('The default layout for everything');
  t('layout');
  $export['layout-default-splatnom'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-user-account';
  $context->description = 'The layout for user account management (new, login, request password)';
  $context->tag = 'layout';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/*' => 'user/*',
        'users/*' => 'users/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(),
      'layout' => 'user-account',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('The layout for user account management (new, login, request password)');
  t('layout');
  $export['layout-user-account'] = $context;

  return $export;
}
