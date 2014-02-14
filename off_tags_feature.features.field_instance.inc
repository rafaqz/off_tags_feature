<?php
/**
 * @file
 * off_tags_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function off_tags_feature_field_default_field_instances() {
  $field_instances = array();

  // Get a list of content types that should have the field_topics field added.
  $entity_types = off_tags_feature_get_entity_types_with_tags();
  if (!empty($entity_types)) {
    foreach ($entity_types as $entity_type => $bundles) {
      foreach(array_keys($bundles) as $bundle) {
        off_tags_feature_field_definition($field_instances, $entity_type, $bundle);
      }
    }
  }

  // Translatables
  // Included for use with string extractors like potx.
  t('Tags');
}


function off_tags_feature_field_definition(&$field_instances, $entity_type, $bundle) {
  // Exported field_instance: 'ENTITY_TYPE-BUNDLE-field_topics'
  $field_instances["$entity_type-$bundle-field_topics"] = array(
    'bundle' => $bundle,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => $entity_type,
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  return $field_instances;
}
