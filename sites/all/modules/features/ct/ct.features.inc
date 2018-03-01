<?php
/**
 * @file
 * ct.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ct_node_info() {
  $items = array(
    'news' => array(
      'name' => t('Новости'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
