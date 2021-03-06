<?php
/**
 * @file
 * tags_feature.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function tags_feature_og_features_default_permissions() {
  $permissions = array();

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

  // Exported og permission: 'node:private_group:update field_tags field'
  $permissions['node:private_group:update field_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:private_group:view field_tags field'
  $permissions['node:private_group:view field_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update field_tags field'
  $permissions['node:project:update field_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_tags field'
  $permissions['node:project:view field_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
