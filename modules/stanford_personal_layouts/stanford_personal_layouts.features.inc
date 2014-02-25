<?php
/**
 * @file
 * stanford_personal_layouts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_personal_layouts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
