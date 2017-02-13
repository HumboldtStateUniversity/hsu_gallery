<?php
/**
 * @file
 * hsu_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hsu_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hsu_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'HSU Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'hsu-gallery';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'clearfix';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Gallery item */
  $handler->display->display_options['fields']['field_hsu_gallery_item']['id'] = 'field_hsu_gallery_item';
  $handler->display->display_options['fields']['field_hsu_gallery_item']['table'] = 'field_data_field_hsu_gallery_item';
  $handler->display->display_options['fields']['field_hsu_gallery_item']['field'] = 'field_hsu_gallery_item';
  $handler->display->display_options['fields']['field_hsu_gallery_item']['label'] = '';
  $handler->display->display_options['fields']['field_hsu_gallery_item']['element_class'] = 'col-sm-6 col-lg-4';
  $handler->display->display_options['fields']['field_hsu_gallery_item']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_gallery_item']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_gallery_item']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_hsu_gallery_item']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_hsu_gallery_item']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_hsu_gallery_item']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_hsu_gallery_item']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'hsu_gallery' => 'hsu_gallery',
  );

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'hsu_gallery',
  );
  $export['hsu_gallery'] = $view;

  return $export;
}
