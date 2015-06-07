<?php
/**
 * @file
 * date_structure.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function date_structure_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_calendar:admin/config/date/calendar
  $menu_links['management_calendar:admin/config/date/calendar'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/date/calendar',
    'router_path' => 'admin/config/date/calendar',
    'link_title' => 'Calendar',
    'options' => array(
      'attributes' => array(
        'title' => 'Calendar administration.',
      ),
      'identifier' => 'management_calendar:admin/config/date/calendar',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_date-api:admin/config/date',
  );
  // Exported menu link: navigation_calendar:event
  $menu_links['navigation_calendar:event'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'event',
    'router_path' => 'event',
    'link_title' => 'Calendar',
    'options' => array(
      'identifier' => 'navigation_calendar:event',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_event-calendar:node/add/event-calendar
  $menu_links['navigation_event-calendar:node/add/event-calendar'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/event-calendar',
    'router_path' => 'node/add/event-calendar',
    'link_title' => 'Event Calendar',
    'options' => array(
      'attributes' => array(
        'title' => 'A content type to create events for calendar.',
      ),
      'identifier' => 'navigation_event-calendar:node/add/event-calendar',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Calendar');
  t('Event Calendar');


  return $menu_links;
}
