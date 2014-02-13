<?php
/**
 * @file
 * off_tags_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function off_tags_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function off_tags_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function off_tags_feature_flag_default_flags() {
  $flags = array();
  // Exported flag: "Tag Filter".
  $flags['tag_filter'] = array(
    'entity_type' => 'taxonomy_term',
    'title' => 'Tag Filter',
    'global' => 0,
    'types' => array(
      0 => 'tags',
    ),
    'flag_short' => '[term:name]',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => '[term:name]',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'off_tags_feature',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
