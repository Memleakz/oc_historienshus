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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_start_dato' => 'field_start_dato',
    'field_slut_dato' => 'field_slut_dato',
    'field_slut_tidspunkt' => 'field_slut_tidspunkt',
    'field_start_tidspunkt' => 'field_start_tidspunkt',
    'field_lokale' => 'field_lokale',
    'field_bekr_ftet' => 'field_bekr_ftet',
    'field_emne' => 'field_emne',
    'field_foregning_2' => 'field_foregning_2',
    'field_foregning' => 'field_foregning',
    'field_adresse' => 'field_adresse',
    'field_e_mail' => 'field_e_mail',
    'field_fornavn' => 'field_fornavn',
    'field_efternavn' => 'field_efternavn',
    'field_fax' => 'field_fax',
    'field_tlf_arbejde' => 'field_tlf_arbejde',
    'field_tlf_privat' => 'field_tlf_privat',
    'field_husk' => 'field_husk',
    'field_send_bekr_ftelse' => 'field_send_bekr_ftelse',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_dato' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_slut_dato' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_slut_tidspunkt' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_tidspunkt' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lokale' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bekr_ftet' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_emne' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_foregning_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_foregning' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_adresse' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_e_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fornavn' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_efternavn' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fax' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tlf_arbejde' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tlf_privat' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_husk' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_send_bekr_ftelse' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Start dato */
  $handler->display->display_options['fields']['field_start_dato']['id'] = 'field_start_dato';
  $handler->display->display_options['fields']['field_start_dato']['table'] = 'field_data_field_start_dato';
  $handler->display->display_options['fields']['field_start_dato']['field'] = 'field_start_dato';
  $handler->display->display_options['fields']['field_start_dato']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_start_dato']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Slut dato */
  $handler->display->display_options['fields']['field_slut_dato']['id'] = 'field_slut_dato';
  $handler->display->display_options['fields']['field_slut_dato']['table'] = 'field_data_field_slut_dato';
  $handler->display->display_options['fields']['field_slut_dato']['field'] = 'field_slut_dato';
  $handler->display->display_options['fields']['field_slut_dato']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_slut_dato']['settings'] = array(
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
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Emne */
  $handler->display->display_options['fields']['field_emne']['id'] = 'field_emne';
  $handler->display->display_options['fields']['field_emne']['table'] = 'field_data_field_emne';
  $handler->display->display_options['fields']['field_emne']['field'] = 'field_emne';
  $handler->display->display_options['fields']['field_emne']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_emne']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_emne']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Foregning */
  $handler->display->display_options['fields']['field_foregning']['id'] = 'field_foregning';
  $handler->display->display_options['fields']['field_foregning']['table'] = 'field_data_field_foregning';
  $handler->display->display_options['fields']['field_foregning']['field'] = 'field_foregning';
  $handler->display->display_options['fields']['field_foregning']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_foregning']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: For 2 */
  $handler->display->display_options['fields']['field_foregning_2']['id'] = 'field_foregning_2';
  $handler->display->display_options['fields']['field_foregning_2']['table'] = 'field_data_field_foregning_2';
  $handler->display->display_options['fields']['field_foregning_2']['field'] = 'field_foregning_2';
  $handler->display->display_options['fields']['field_foregning_2']['label'] = 'Foregning 2';
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
  $handler->display->display_options['fields']['field_e_mail']['element_label_type'] = 'strong';
  /* Field: Content: Tlf. Arbejde */
  $handler->display->display_options['fields']['field_tlf_arbejde']['id'] = 'field_tlf_arbejde';
  $handler->display->display_options['fields']['field_tlf_arbejde']['table'] = 'field_data_field_tlf_arbejde';
  $handler->display->display_options['fields']['field_tlf_arbejde']['field'] = 'field_tlf_arbejde';
  $handler->display->display_options['fields']['field_tlf_arbejde']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_tlf_arbejde']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Tlf. privat */
  $handler->display->display_options['fields']['field_tlf_privat']['id'] = 'field_tlf_privat';
  $handler->display->display_options['fields']['field_tlf_privat']['table'] = 'field_data_field_tlf_privat';
  $handler->display->display_options['fields']['field_tlf_privat']['field'] = 'field_tlf_privat';
  $handler->display->display_options['fields']['field_tlf_privat']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_tlf_privat']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_fax']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Lokale */
  $handler->display->display_options['fields']['field_lokale']['id'] = 'field_lokale';
  $handler->display->display_options['fields']['field_lokale']['table'] = 'field_data_field_lokale';
  $handler->display->display_options['fields']['field_lokale']['field'] = 'field_lokale';
  $handler->display->display_options['fields']['field_lokale']['element_label_type'] = 'strong';
  /* Field: Content: Husk */
  $handler->display->display_options['fields']['field_husk']['id'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['table'] = 'field_data_field_husk';
  $handler->display->display_options['fields']['field_husk']['field'] = 'field_husk';
  $handler->display->display_options['fields']['field_husk']['element_label_type'] = 'strong';
  /* Field: Content: Slut tidspunkt */
  $handler->display->display_options['fields']['field_slut_tidspunkt']['id'] = 'field_slut_tidspunkt';
  $handler->display->display_options['fields']['field_slut_tidspunkt']['table'] = 'field_data_field_slut_tidspunkt';
  $handler->display->display_options['fields']['field_slut_tidspunkt']['field'] = 'field_slut_tidspunkt';
  $handler->display->display_options['fields']['field_slut_tidspunkt']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_slut_tidspunkt']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Start tidspunkt */
  $handler->display->display_options['fields']['field_start_tidspunkt']['id'] = 'field_start_tidspunkt';
  $handler->display->display_options['fields']['field_start_tidspunkt']['table'] = 'field_data_field_start_tidspunkt';
  $handler->display->display_options['fields']['field_start_tidspunkt']['field'] = 'field_start_tidspunkt';
  $handler->display->display_options['fields']['field_start_tidspunkt']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_start_tidspunkt']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Bekræftet */
  $handler->display->display_options['fields']['field_bekr_ftet']['id'] = 'field_bekr_ftet';
  $handler->display->display_options['fields']['field_bekr_ftet']['table'] = 'field_data_field_bekr_ftet';
  $handler->display->display_options['fields']['field_bekr_ftet']['field'] = 'field_bekr_ftet';
  $handler->display->display_options['fields']['field_bekr_ftet']['element_label_type'] = 'strong';
  /* Field: Content: Send Bekræftelse */
  $handler->display->display_options['fields']['field_send_bekr_ftelse']['id'] = 'field_send_bekr_ftelse';
  $handler->display->display_options['fields']['field_send_bekr_ftelse']['table'] = 'field_data_field_send_bekr_ftelse';
  $handler->display->display_options['fields']['field_send_bekr_ftelse']['field'] = 'field_send_bekr_ftelse';
  $handler->display->display_options['fields']['field_send_bekr_ftelse']['element_label_type'] = 'strong';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Print Kvittering';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Print Kvittering';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/printpdf/[nid]';
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: Content: Start dato (field_start_dato) */
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
  /* Filter criterion: Content: Start dato (field_start_dato) */
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
  /* Filter criterion: Content: Foregning (field_foregning) */
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
  /* Filter criterion: Content: Lokale (field_lokale) */
  $handler->display->display_options['filters']['field_lokale_tid']['id'] = 'field_lokale_tid';
  $handler->display->display_options['filters']['field_lokale_tid']['table'] = 'field_data_field_lokale';
  $handler->display->display_options['filters']['field_lokale_tid']['field'] = 'field_lokale_tid';
  $handler->display->display_options['filters']['field_lokale_tid']['value'] = '';
  $handler->display->display_options['filters']['field_lokale_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_lokale_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lokale_tid']['expose']['operator_id'] = 'field_lokale_tid_op';
  $handler->display->display_options['filters']['field_lokale_tid']['expose']['label'] = 'Lokale';
  $handler->display->display_options['filters']['field_lokale_tid']['expose']['operator'] = 'field_lokale_tid_op';
  $handler->display->display_options['filters']['field_lokale_tid']['expose']['identifier'] = 'field_lokale_tid';
  $handler->display->display_options['filters']['field_lokale_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_lokale_tid']['vocabulary'] = 'lokaler';
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
  /* Filter criterion: Content: Tlf. Arbejde (field_tlf_arbejde) */
  $handler->display->display_options['filters']['field_tlf_arbejde_value']['id'] = 'field_tlf_arbejde_value';
  $handler->display->display_options['filters']['field_tlf_arbejde_value']['table'] = 'field_data_field_tlf_arbejde';
  $handler->display->display_options['filters']['field_tlf_arbejde_value']['field'] = 'field_tlf_arbejde_value';
  $handler->display->display_options['filters']['field_tlf_arbejde_value']['group'] = 1;
  $handler->display->display_options['filters']['field_tlf_arbejde_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tlf_arbejde_value']['expose']['operator_id'] = 'field_tlf_arbejde_value_op';
  $handler->display->display_options['filters']['field_tlf_arbejde_value']['expose']['label'] = 'Tlf. Arbejde';
  $handler->display->display_options['filters']['field_tlf_arbejde_value']['expose']['operator'] = 'field_tlf_arbejde_value_op';
  $handler->display->display_options['filters']['field_tlf_arbejde_value']['expose']['identifier'] = 'field_tlf_arbejde_value';
  $handler->display->display_options['filters']['field_tlf_arbejde_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Tlf. privat (field_tlf_privat) */
  $handler->display->display_options['filters']['field_tlf_privat_value']['id'] = 'field_tlf_privat_value';
  $handler->display->display_options['filters']['field_tlf_privat_value']['table'] = 'field_data_field_tlf_privat';
  $handler->display->display_options['filters']['field_tlf_privat_value']['field'] = 'field_tlf_privat_value';
  $handler->display->display_options['filters']['field_tlf_privat_value']['group'] = 1;
  $handler->display->display_options['filters']['field_tlf_privat_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tlf_privat_value']['expose']['operator_id'] = 'field_tlf_privat_value_op';
  $handler->display->display_options['filters']['field_tlf_privat_value']['expose']['label'] = 'Tlf. privat';
  $handler->display->display_options['filters']['field_tlf_privat_value']['expose']['operator'] = 'field_tlf_privat_value_op';
  $handler->display->display_options['filters']['field_tlf_privat_value']['expose']['identifier'] = 'field_tlf_privat_value';
  $handler->display->display_options['filters']['field_tlf_privat_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lokale-bookinger';
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
    t('Start dato'),
    t('Slut dato'),
    t('Nid'),
    t('Emne'),
    t('Foregning'),
    t('Foregning 2'),
    t('Fornavn'),
    t('Efternavn'),
    t('Adresse'),
    t('E-mail'),
    t('Tlf. Arbejde'),
    t('Tlf. privat'),
    t('Fax'),
    t('Lokale'),
    t('Husk'),
    t('Slut tidspunkt'),
    t('Start tidspunkt'),
    t('Bekræftet'),
    t('Send Bekræftelse'),
    t('Print Kvittering'),
    t('Edit link'),
    t('Page'),
  );
  $export['lokale_bookinger'] = $view;

  return $export;
}
