<?php
/**
 * @file
 * historiens_hus_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function historiens_hus_features_user_default_roles() {
  $roles = array();

  // Exported role: Historiens hus.
  $roles['Historiens hus'] = array(
    'name' => 'Historiens hus',
    'weight' => 3,
  );

  return $roles;
}
