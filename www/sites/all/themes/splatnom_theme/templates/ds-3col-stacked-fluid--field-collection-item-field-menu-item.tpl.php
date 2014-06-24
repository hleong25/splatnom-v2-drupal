<?php

/**
 * @file
 * Display Suite fluid 3 column 25/50/25 stacked template.
 */

  // Add sidebar classes so that we can apply the correct width to the center region in css.
  if (($left && !$right) || ($right && !$left)) $classes .= ' group-one-sidebar';
  if ($left && $right) $classes .= ' group-two-sidebars';
  if ($left) $classes .= ' group-sidebar-left';
  if ($right) $classes .= ' group-sidebar-right';

  $is_divider    = false;
  $class_divider = '';

  if (@$content['field_menu_item_is_divider_left']['#items'][0]['value'])
  {
      $is_divider    = true;
      $class_divider = 'group-divider-left';
  }
  else if (@$content['field_menu_item_is_divider_centr']['#items'][0]['value'])
  {
      $is_divider    = true;
      $class_divider = 'group-divider-center';
  }
  else if (@$content['field_menu_item_is_divider_right']['#items'][0]['value'])
  {
      $is_divider    = true;
      $class_divider = 'group-divider-right';
  }

?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="ds-3col-stacked-fluid <?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

<?php if ($is_divider): ?>

  <div class="group-divider <?php print $class_divider; ?>">
    <span class="group-divider-text"><?php print $content['field_menu_item_name']['#items'][0]['value']; ?></span>
  </div>

<?php else: ?>

  <<?php print $header_wrapper ?> class="group-header<?php print $header_classes; ?>">
    <?php print $header; ?>
  </<?php print $header_wrapper ?>>

  <?php if ($left): ?>
    <<?php print $left_wrapper ?> class="group-left<?php print $left_classes; ?>">
      <?php print $left; ?>
    </<?php print $left_wrapper ?>>
  <?php endif; ?>

  <?php if ($middle): ?>
    <<?php print $middle_wrapper ?> class="group-middle<?php print $middle_classes; ?>">
      <?php print $middle; ?>
    </<?php print $middle_wrapper ?>>
  <?php endif; ?>

  <?php if ($right): ?>
    <<?php print $right_wrapper ?> class="group-right<?php print $right_classes; ?>">
      <?php print $right; ?>
    </<?php print $right_wrapper ?>>
  <?php endif; ?>

  <<?php print $footer_wrapper ?> class="group-footer<?php print $footer_classes; ?>">
    <?php print $footer; ?>
  </<?php print $footer_wrapper ?>>

<?php endif; ?>
</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
