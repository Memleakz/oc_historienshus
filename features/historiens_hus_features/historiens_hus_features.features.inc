<?php
/**
 * @file
 * historiens_hus_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function historiens_hus_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function historiens_hus_features_node_info() {
  $items = array(
    'lokale_booking' => array(
      'name' => t('Lokale booking'),
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
