<?php
/**
 * @file
 * historiens_hus_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function historiens_hus_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lokale_bookinger';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lokale bookinger';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lokale bookinger';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Start dato */
  $handler->display->display_options['fields']['field_start_dato']['id'] = 'field_start_dato';
  $handler->display->display_options['fields']['field_start_dato']['table'] = 'field_data_field_start_dato';
  $handler->display->display_options['fields']['field_start_dato']['field'] = 'field_start_dato';
  $handler->display->display_options['fields']['field_start_dato']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_start_dato']['alter']['text'] = 'Start: [field_start_dato-value]
Slut: [field_start_dato-value2]';
  $handler->display->display_options['fields']['field_start_dato']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_start_dato']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_class'] = 'js-hide';
  /* Field: Content: Emne */
  $handler->display->display_options['fields']['field_emne']['id'] = 'field_emne';
  $handler->display->display_options['fields']['field_emne']['table'] = 'field_data_field_emne';
  $handler->display->display_options['fields']['field_emne']['field'] = 'field_emne';
  $handler->display->display_options['fields']['field_emne']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_emne']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_emne']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Forening */
  $handler->display->display_options['fields']['field_foregning']['id'] = 'field_foregning';
  $handler->display->display_options['fields']['field_foregning']['table'] = 'field_data_field_foregning';
  $handler->display->display_options['fields']['field_foregning']['field'] = 'field_foregning';
  $handler->display->display_options['fields']['field_foregning']['label'] = 'Foregning';
  $handler->display->display_options['fields']['field_foregning']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_foregning']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: For 2 */
  $handler->display->display_options['fields']['field_foregning_2']['id'] = 'field_foregning_2';
  $handler->display->display_options['fields']['field_foregning_2']['table'] = 'field_data_field_foregning_2';
  $handler->display->display_options['fields']['field_foregning_2']['field'] = 'field_foregning_2';
  $handler->display->display_options['fields']['field_foregning_2']['label'] = 'Foregning 2';
  $handler->display->display_options['fields']['field_foregning_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_foregning_2']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_foregning_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Fornavn */
  $handler->display->display_options['fields']['field_fornavn']['id'] = 'field_fornavn';
  $handler->display->display_options['fields']['field_fornavn']['table'] = 'field_data_field_fornavn';
  $handler->display->display_options['fields']['field_fornavn']['field'] = 'field_fornavn';
  $handler->display->display_options['fields']['field_fornavn']['element_label_type'] = 'strong';
  /* Field: Content: Efternavn */
  $handler->display->display_options['fields']['field_efternavn']['id'] = 'field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['table'] = 'field_data_field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['field'] = 'field_efternavn';
  $handler->display->display_options['fields']['field_efternavn']['element_label_type'] = 'strong';
  /* Field: Content: Adresse */
  $handler->display->display_options['fields']['field_adresse']['id'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['table'] = 'field_data_field_adresse';
  $handler->display->display_options['fields']['field_adresse']['field'] = 'field_adresse';
  $handler->display->display_options['fields']['field_adresse']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_adresse']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_adresse']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_e_mail']['id'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['table'] = 'field_data_field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['field'] = 'field_e_mail';
  $handler->display->display_options['fields']['field_e_mail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_e_mail']['alter']['text'] = '<a href="mailto:[field_e_mail]">[field_e_mail]</a>';
  $handler->display->display_options['fields']['field_e_mail']['element_label_type'] = 'strong';
  /* Field: Content: Telefon */
  $handler->display->display_options['fields']['field_tlf_privat']['id'] = 'field_tlf_privat';
  $handler->display->display_options['fields']['field_tlf_privat']['table'] = 'field_data_field_tlf_privat';
  $handler->display->display_options['fields']['field_tlf_privat']['field'] = 'field_tlf_privat';
  $handler->display->display_options['fields']['field_tlf_privat']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tlf_privat']['alter']['text'] = '<a target="_blank" href="tel:[field_tlf_privat-value]">[field_tlf_privat-value]</a>';
  $handler->display->display_options['fields']['field_tlf_privat']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_tlf_privat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Bekræftet */
  $handler->display->display_options['fields']['field_bekr_ftet']['id'] = 'field_bekr_ftet';
  $handler->display->display_options['fields']['field_bekr_ftet']['table'] = 'field_data_field_bekr_ftet';
  $handler->display->display_options['fields']['field_bekr_ftet']['field'] = 'field_bekr_ftet';
  $handler->display->display_options['fields']['field_bekr_ftet']['label'] = 'Status';
  $handler->display->display_options['fields']['field_bekr_ftet']['alter']['path'] = '/oc/booking/bekræft';
  $handler->display->display_options['fields']['field_bekr_ftet']['alter']['alt'] = 'Bekræft booking.';
  $handler->display->display_options['fields']['field_bekr_ftet']['element_class'] = 'unconfirmed';
  $handler->display->display_options['fields']['field_bekr_ftet']['element_label_type'] = 'strong';
  /* Field: Bekræft kanp */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Bekræft kanp';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<a class="booking-confirm btn btn-default">Bekræft</a>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Print kvittering */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Print kvittering';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Print Kvittering';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/printpdf/[nid]';
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = 'Print pdf kvittering.';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: print labels */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'print labels';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a target="_blank" title="Print labels for alle bookinger med samme navn" class="btn btn-default" href="/oc/lokale_booking/labels/[nid]">Labels</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['edit_node']['element_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Rediger';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<button href="/node/[nid]">Se mere</button>';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'btn btn-default';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Se mere';
  /* Sort criterion: Content: Start dato -  start date (field_start_dato) */
  $handler->display->display_options['sorts']['field_start_dato_value']['id'] = 'field_start_dato_value';
  $handler->display->display_options['sorts']['field_start_dato_value']['table'] = 'field_data_field_start_dato';
  $handler->display->display_options['sorts']['field_start_dato_value']['field'] = 'field_start_dato_value';
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
    'lokale_booking' => 'lokale_booking',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Start dato -  start date (field_start_dato) */
  $handler->display->display_options['filters']['field_start_dato_value']['id'] = 'field_start_dato_value';
  $handler->display->display_options['filters']['field_start_dato_value']['table'] = 'field_data_field_start_dato';
  $handler->display->display_options['filters']['field_start_dato_value']['field'] = 'field_start_dato_value';
  $handler->display->display_options['filters']['field_start_dato_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_start_dato_value']['group'] = 1;
  $handler->display->display_options['filters']['field_start_dato_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_start_dato_value']['expose']['operator_id'] = 'field_start_dato_value_op';
  $handler->display->display_options['filters']['field_start_dato_value']['expose']['label'] = 'Start dato';
  $handler->display->display_options['filters']['field_start_dato_value']['expose']['operator'] = 'field_start_dato_value_op';
  $handler->display->display_options['filters']['field_start_dato_value']['expose']['identifier'] = 'field_start_dato_value';
  $handler->display->display_options['filters']['field_start_dato_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_start_dato_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_start_dato_value']['default_date'] = ' now';
  $handler->display->display_options['filters']['field_start_dato_value']['year_range'] = '-0:+3';
  /* Filter criterion: Content: Forening (field_foregning) */
  $handler->display->display_options['filters']['field_foregning_tid']['id'] = 'field_foregning_tid';
  $handler->display->display_options['filters']['field_foregning_tid']['table'] = 'field_data_field_foregning';
  $handler->display->display_options['filters']['field_foregning_tid']['field'] = 'field_foregning_tid';
  $handler->display->display_options['filters']['field_foregning_tid']['value'] = '';
  $handler->display->display_options['filters']['field_foregning_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_foregning_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_foregning_tid']['expose']['operator_id'] = 'field_foregning_tid_op';
  $handler->display->display_options['filters']['field_foregning_tid']['expose']['label'] = 'Foregning';
  $handler->display->display_options['filters']['field_foregning_tid']['expose']['operator'] = 'field_foregning_tid_op';
  $handler->display->display_options['filters']['field_foregning_tid']['expose']['identifier'] = 'field_foregning_tid';
  $handler->display->display_options['filters']['field_foregning_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_foregning_tid']['vocabulary'] = 'foregninger';
  /* Filter criterion: Content: E-mail (field_e_mail) */
  $handler->display->display_options['filters']['field_e_mail_value']['id'] = 'field_e_mail_value';
  $handler->display->display_options['filters']['field_e_mail_value']['table'] = 'field_data_field_e_mail';
  $handler->display->display_options['filters']['field_e_mail_value']['field'] = 'field_e_mail_value';
  $handler->display->display_options['filters']['field_e_mail_value']['group'] = 1;
  $handler->display->display_options['filters']['field_e_mail_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_e_mail_value']['expose']['operator_id'] = 'field_e_mail_value_op';
  $handler->display->display_options['filters']['field_e_mail_value']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['field_e_mail_value']['expose']['operator'] = 'field_e_mail_value_op';
  $handler->display->display_options['filters']['field_e_mail_value']['expose']['identifier'] = 'field_e_mail_value';
  $handler->display->display_options['filters']['field_e_mail_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Telefon (field_tlf_privat) */
  $handler->display->display_options['filters']['field_tlf_privat_value']['id'] = 'field_tlf_privat_value';
  $handler->display->display_options['filters']['field_tlf_privat_value']['table'] = 'field_data_field_tlf_privat';
  $handler->display->display_options['filters']['field_tlf_privat_value']['field'] = 'field_tlf_privat_value';
  $handler->display->display_options['filters']['field_tlf_privat_value']['group'] = 1;
  $handler->display->display_options['filters']['field_tlf_privat_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tlf_privat_value']['expose']['operator_id'] = 'field_tlf_privat_value_op';
  $handler->display->display_options['filters']['field_tlf_privat_value']['expose']['label'] = 'Tlf';
  $handler->display->display_options['filters']['field_tlf_privat_value']['expose']['operator'] = 'field_tlf_privat_value_op';
  $handler->display->display_options['filters']['field_tlf_privat_value']['expose']['identifier'] = 'field_tlf_privat_value';
  $handler->display->display_options['filters']['field_tlf_privat_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lokale-bookinger';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Lokale bookinger';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['lokale_bookinger'] = array(
    t('Master'),
    t('Lokale bookinger'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Dato'),
    t('Start: [field_start_dato-value]
Slut: [field_start_dato-value2]'),
    t('Emne'),
    t('Foregning'),
    t('Foregning 2'),
    t('Fornavn'),
    t('Efternavn'),
    t('Adresse'),
    t('E-mail'),
    t('<a href="mailto:[field_e_mail]">[field_e_mail]</a>'),
    t('Telefon'),
    t('<a target="_blank" href="tel:[field_tlf_privat-value]">[field_tlf_privat-value]</a>'),
    t('Status'),
    t('Bekræft booking.'),
    t('<a class="booking-confirm btn btn-default">Bekræft</a>'),
    t('Print Kvittering'),
    t('Print pdf kvittering.'),
    t('<a target="_blank" title="Print labels for alle bookinger med samme navn" class="btn btn-default" href="/oc/lokale_booking/labels/[nid]">Labels</a>'),
    t('Rediger'),
    t('<button href="/node/[nid]">Se mere</button>'),
    t('Se mere'),
    t('Start dato'),
    t('Tlf'),
    t('Page'),
  );
  $export['lokale_bookinger'] = $view;

  return $export;
}
