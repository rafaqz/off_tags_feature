<?php
/**
 * @file
 * off_tags_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function off_tags_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_and_integration';
  $context->description = 'Group blocks that are for the group page and integration pages only.';
  $context->tag = 'groups feature';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'integration' => 'integration',
        'group_group' => 'group_group',
      ),
    ),
    'context_og_condition_group_type' => array(
      'values' => array(
        '_any_' => '_any_',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Group blocks that are for the group page and integration pages only.');
  t('groups feature');
  $export['group_and_integration'] = $context;

  return $export;
}
