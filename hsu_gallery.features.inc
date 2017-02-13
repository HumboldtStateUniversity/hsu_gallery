<?php
/**
 * @file
 * hsu_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hsu_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hsu_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function hsu_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: hsu_colorbox_lg.
  $styles['hsu_colorbox_lg'] = array(
    'label' => 'hsu_colorbox_lg h600',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 600,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hsu_gallery.
  $styles['hsu_gallery'] = array(
    'label' => 'hsu_gallery h490',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 490,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      8 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#ffffff',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 735,
            'height' => 490,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function hsu_gallery_node_info() {
  $items = array(
    'hsu_gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('A collection of images. Pagination appears for galleries with more than 12 images.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
