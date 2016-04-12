/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
jQuery( document ).ready(function() {
    
    jQuery('#edit-field-start-dato-und-0-value-datepicker-popup-0').change(function(e){
        var elem = jQuery(e.target);
        jQuery('#edit-field-start-dato-und-0-value2-datepicker-popup-0').val(elem.val())
    });
    
});



