<?php
/**
 * @file
 * dr7_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dr7_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'panels_';
  $page->task = 'page';
  $page->admin_title = 'Panels ';
  $page->admin_description = '';
  $page->path = 'panels_url';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_panels___panel_context_2382c509-75ae-43b1-988f-410d57b6a44f';
  $handler->task = 'page';
  $handler->subtask = 'panels_';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Панель',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'decea18e-d804-40ff-9ac2-f448c71a1ed0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_panels___panel_context_2382c509-75ae-43b1-988f-410d57b6a44f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0a3e541e-b9db-441e-839c-f5a032886fa8';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'films_view';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 1,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0a3e541e-b9db-441e-839c-f5a032886fa8';
  $display->content['new-0a3e541e-b9db-441e-839c-f5a032886fa8'] = $pane;
  $display->panels['left'][0] = 'new-0a3e541e-b9db-441e-839c-f5a032886fa8';
  $pane = new stdClass();
  $pane->pid = 'new-64355bd2-8d87-4ce2-9f45-9700ba926e48';
  $pane->panel = 'right';
  $pane->type = 'page_primary_links';
  $pane->subtype = 'page_primary_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '64355bd2-8d87-4ce2-9f45-9700ba926e48';
  $display->content['new-64355bd2-8d87-4ce2-9f45-9700ba926e48'] = $pane;
  $display->panels['right'][0] = 'new-64355bd2-8d87-4ce2-9f45-9700ba926e48';
  $pane = new stdClass();
  $pane->pid = 'new-81a02f33-3816-45b3-9aeb-ae67731923a9';
  $pane->panel = 'right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '3',
    'links' => 1,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'teaser',
    'link_node_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '81a02f33-3816-45b3-9aeb-ae67731923a9';
  $display->content['new-81a02f33-3816-45b3-9aeb-ae67731923a9'] = $pane;
  $display->panels['right'][1] = 'new-81a02f33-3816-45b3-9aeb-ae67731923a9';
  $pane = new stdClass();
  $pane->pid = 'new-faaacaa0-f600-443d-b519-3ddaf2728f9c';
  $pane->panel = 'right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '1',
    'links' => 1,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'teaser',
    'link_node_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'faaacaa0-f600-443d-b519-3ddaf2728f9c';
  $display->content['new-faaacaa0-f600-443d-b519-3ddaf2728f9c'] = $pane;
  $display->panels['right'][2] = 'new-faaacaa0-f600-443d-b519-3ddaf2728f9c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0a3e541e-b9db-441e-839c-f5a032886fa8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['panels_'] = $page;

  return $pages;

}
