<?php

/**
 * @file
 * Builds placeholder replacement tokens for field-collection-related data.
 */

/**
 * Implements hook_token_info().
 */
function field_collection_token_info() {
  $info = array();

  $info['tokens']['field_collection_item']['host'] = array(
    'name' => t('Field Collection host entity'),
    'description' => t('Host entity.'),
    'type' => 'node',
  );

  return $info;
}

/**
 * Implements hook_tokens().
 */
function field_collection_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();
  $sanitize = !empty($options['sanitize']);

  if ($type == 'field_collection_item' && !empty($data[$type])) {
    $item = $data[$type];
    if ($host_entity_tokens = token_find_with_prefix($tokens, 'host')) {
      // Load field collection item and get host entity and host entity type.
      $host_entity_type = $item->hostEntityType();
      $host_entity = $item->hostEntity();
      // When saving revisions, only $item->original knows the hostEntity.
      if (!$host_entity && isset($item->original)) {
        $host_entity_type = $item->original->hostEntityType();
        $host_entity = $item->original->hostEntity();
      }
      $host_entity_info = entity_get_info($host_entity_type);
      $host_entity_token_type = isset($host_entity_info['token type']) ? $host_entity_info['token type'] : $host_entity_type;
      $replacements += token_generate($host_entity_token_type, $host_entity_tokens, array($host_entity_token_type => $host_entity));
    }
  }

  return $replacements;
}

