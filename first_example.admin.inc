<?php
/**
* @file
* Resultado de llamadas a páginas de administración para el módulo 
* First Example.
*/

/**
* Constructor del formulario para configurar el módulo.
*
*/
function first_example_admin_settings() {
  $form['first_example_message'] = array(
    '#type' => 'textfield',
    '#title' => t('Add a welcome message'),
    '#default_value' => variable_get('first_example_message', 'Welcome'),
    '#description' => t( 'This is a welcome message to the block First Example.'),
  );
  return system_settings_form($form);
}