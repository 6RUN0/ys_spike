<?php


function ys_spike_admin_settings($form, &$form_state) {

  $form['ys_spike']['ys_spike_user_agent'] = array(
    '#type' => 'textfield',
    '#title' => t('Yandex.Server User-Agent'),
    '#required' => TRUE,
    '#description' => t('User Agent поискового сервера Yandex.Server. См. стр. 57 документации. Секция HttpOptions в конфигурации.'),
    '#default_value' => variable_get('ys_spike_user_agent', ''),
  );
  $form['ys_spike']['ys_spike_ip_address'] = array(
    '#type' => 'textfield',
    '#title' => t('Yandex.Server ip адресс'),
    '#required' => TRUE,
    '#description' => t('IP адресс поискового сервера Yandex.Server'),
    '#default_value' => variable_get('ys_spike_ip_address', '127.0.0.1'),
  );
  $form['ys_spike']['ys_spike_theme'] = array(
    '#type' => 'select',
    '#title' => t('Тема оформления'),
    '#required' => TRUE,
    '#description' => t('Тема оформления, которая будет использованна для индексации Yandex.Server\'ом'),
    '#default_value' => variable_get('ys_spike_theme', ''),
    '#options' => _ys_spike_list_themes(),
  );

  return system_settings_form($form);
}
