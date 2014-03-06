<?php
/**
 * @file
 * off_tags_feature.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function off_tags_feature_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:closed_group:update field_tags field'
  $permissions['node:closed_group:update field_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:closed_group:view field_tags field'
  $permissions['node:closed_group:view field_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group:update field_tags field'
  $permissions['node:group:update field_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group:view field_tags field'
  $permissions['node:group:view field_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:update field_tags field'
  $permissions['node:project:update field_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view field_tags field'
  $permissions['node:project:view field_tags field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
