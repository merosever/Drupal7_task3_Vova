<?php
/**
 * @file
 * dr7_user.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dr7_user_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_phone'.
  $field_instances['user-user-field_phone'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_phone',
    'label' => 'Телефон',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => 'site_default',
        'format_handlers' => array(
          'phone' => 'phone',
          'address' => 0,
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-oneline' => 0,
          'name-full' => 0,
          'address-optional' => 0,
        ),
        'phone_number_fields' => array(
          'extension' => 0,
          'fax' => 0,
          'mobile' => 0,
          'phone' => 'phone',
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Телефон');

  return $field_instances;
}
