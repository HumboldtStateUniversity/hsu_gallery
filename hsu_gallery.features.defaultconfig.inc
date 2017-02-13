<?php
/**
 * @file
 * hsu_gallery.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function hsu_gallery_defaultconfig_features() {
  return array(
    'hsu_gallery' => array(
      'strongarm' => 'strongarm',
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function hsu_gallery_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_hsu_gallery_pattern';
  $strongarm->value = 'gallery/[node:title]';
  $export['pathauto_node_hsu_gallery_pattern'] = $strongarm;

  return $export;
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function hsu_gallery_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create hsu_gallery content'.
  $permissions['create hsu_gallery content'] = array(
    'name' => 'create hsu_gallery content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any hsu_gallery content'.
  $permissions['delete any hsu_gallery content'] = array(
    'name' => 'delete any hsu_gallery content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own hsu_gallery content'.
  $permissions['delete own hsu_gallery content'] = array(
    'name' => 'delete own hsu_gallery content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any hsu_gallery content'.
  $permissions['edit any hsu_gallery content'] = array(
    'name' => 'edit any hsu_gallery content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own hsu_gallery content'.
  $permissions['edit own hsu_gallery content'] = array(
    'name' => 'edit own hsu_gallery content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
