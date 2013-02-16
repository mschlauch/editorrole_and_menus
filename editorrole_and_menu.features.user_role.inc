<?php
/**
 * @file
 * editorrole_and_menu.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function editorrole_and_menu_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '3',
  );

  return $roles;
}
