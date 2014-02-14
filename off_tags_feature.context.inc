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
  $context->name = 'tag_filter_groups';
  $context->description = 'Shows tag filter block on integration pages.';
  $context->tag = 'tags feature';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'integration' => 'integration',
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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-tag_filter-group_block' => array(
          'module' => 'views',
          'delta' => 'tag_filter-group_block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows tag filter block on integration pages.');
  t('tags feature');
  $export['tag_filter_groups'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tag_filter_users';
  $context->description = 'Shows tag filter block on user integration pages.';
  $context->tag = 'tags feature';
  $context->conditions = array(
    'context' => array(
      'values' => array(
        'integration' => 'integration',
      ),
    ),
    'path' => array(
      'values' => array(
        'user/*' => 'user/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-tag_filter-user_block' => array(
          'module' => 'views',
          'delta' => 'tag_filter-user_block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows tag filter block on user integration pages.');
  t('tags feature');
  $export['tag_filter_users'] = $context;

  return $export;
}
