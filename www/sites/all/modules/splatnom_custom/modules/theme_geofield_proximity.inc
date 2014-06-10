<?php

// https://drupal.org/node/1833242

/**
 * Implements hook_element_info_alter()
 * Add additional (!) custom process function
 */
function splatnom_custom_element_info_alter(&$type) {
    if (isset($type['geofield_proximity']['#process'])) {
        $type['geofield_proximity']['#process'][] = 'splatnom_custom_proximity_element_process';
    }
}

/*
 * Alter geofield views exposed form, remove distance and unit
 */
function splatnom_custom_proximity_element_process($element, &$form_state, &$form) {
    $view_name = $form_state['view']->name;
    $view_current_display = $form_state['view']->current_display;

    if (($view_name == 'proximity_search_for_restaurant_menu') &&
        ($view_current_display == 'page'))
    {
        // hide the 'distance'
        $element['distance']['#access'] = FALSE;

        // hide the 'unit'
        $element['unit']['#access'] = FALSE;

        // clear the 'from'
        unset($element['origin']['#prefix']);
    }

    return $element;
}

