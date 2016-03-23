<html>
    <meta charset="utf-8">
    <head>
        <title>title</title>
    </head>
    <body>
        <?php
foreach($nodes['node'] as $node_info)
{
    $wrapper = entity_metadata_wrapper('node',node_load($node_info->nid));
    $Adresse = $wrapper->field_adresse->value();
    $sted = $wrapper->field_sted->value();
    
    $date_data = $wrapper->field_start_dato->value();
    $start_date = date('d/m/Y',  strtotime($date_data['value']));
    $start_time = date("H:i", strtotime($date_data['value']));
    
    $slut_dato = date('d/m/Y',strtotime($date_data['value2']));
    $slut_time = date("H:i", strtotime($date_data['value2']));
    
    $foregning_set = $wrapper->__isset('field_foregning');
?>
<div id="label_container" style="font-size: 12px;margin:5px;padding:5px;float:left;width:30%;height: 150px;border: 1 px dashed">
    <div id=""><span style="float:left"><?php echo $sted->name; ?></span><span style="float:right"><?php echo $start_date ."<br/>".$start_time."-". $slut_time;?></span></div><br/><br/>
    <span style="float:left"><?php echo "Forening:".$foregning_set && is_string($wrapper->field_foregning->value()) ? $wrapper->field_foregning->value() : ""; ?></span><br/>
    <span style="float:left;width:100%;"><?php echo $wrapper->field_fornavn->value() . " " . $wrapper->field_efternavn->value(); ?></span><br/>
    <span style="float:left;width:100%;">
        <?php echo $Adresse['thoroughfare'] ?><br/>
        <?php echo $Adresse['postal_code'] . " " . $Adresse['thoroughfare']; ?>
    
    </span>
    <span style="float:left;width:100%;"><?php echo "Telefon: "; echo $wrapper->__isset('field_tlf_privat') ? $wrapper->field_tlf_privat->value() : "" ?></span>
</div>
<?php
}
?>
    </body>
</html>



