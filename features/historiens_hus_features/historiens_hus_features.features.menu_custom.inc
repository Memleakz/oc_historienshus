<?php
/**
 * @file
 * historiens_hus_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function historiens_hus_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-historienshus-menu.
  $menus['menu-historienshus-menu'] = array(
    'menu_name' => 'menu-historienshus-menu',
    'title' => 'Historienshus menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Historienshus menu');


  return $menus;
}
