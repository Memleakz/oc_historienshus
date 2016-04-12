jQuery( document ).ready(function() {
    Update_confirmed_colors();
   /*jQuery('body').on('click','.booking-confirm',function(e){
        var target = jQuery(e.target);
        var elem = target.parent().parent().parent().find('.views-field-field-bekr-ftet .field-content');
        var nid = target.parent().parent().parent().find('.views-field-nid .field-content').text();
        if(elem.text() == "Ikke bekræftet")
         {
            var r = confirm("Er du sikker på du vil bekræfte booking ?");
            if (r == true) {
                jQuery.ajax({
                    method: "GET",
                    url: "/oc/lokale_booking/ajax_bekræft/" +nid,
                  })
                    .done(function( msg ) {
                      
                      elem.text('Bekræftet');
                      elem.removeClass('unconfirmed');
                      elem.addClass('confirmed');
                      alert( "Booking bekræftet." );
                    });
             
            } 
        }
       e.preventDefault();
   });*/
   function Update_confirmed_colors()
   {
       var elem = jQuery('.views-row').find('.views-field-field-bekr-ftet .field-content');
       jQuery.each(elem,function(index,field){
            field = jQuery(field);
            var text = field.text();
           if(text == "Bekræftet")
           {
               field.removeClass('unconfirmed');
               field.addClass('confirmed');
           }
       })
   }
});

