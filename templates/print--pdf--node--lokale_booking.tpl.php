<?php
/*
 * This template handles setting up the correct templates for the loakl historisk
 * hus. it handles FREE and Non FREE receipts.
 */
$wrapper = entity_metadata_wrapper('node', $node);
/*
 * Setup start_time objects
 */
$date_data = $wrapper->field_start_dato->value();
$start_date = date('d/m/Y',  strtotime($date_data['value']));
$start_time = date("H:i", strtotime($date_data['value']));
/*
 * Setup stop_time objects
 */
$slut_dato = date('d/m/Y',strtotime($date_data['value2']));
$slut_time = date("H:i", strtotime($date_data['value2']));

$Addresse_data = $wrapper->field_adresse->value();

?>
<html>
<head>
	<meta charset="utf-8">
	<title>PDF Kvittering</title>
</head>
<body>
<div style="width: 100%;">
	<div style="float:left;width:50%;padding-top: 140px;">
		<b>
		<?php echo $wrapper->field_fornavn->value() . " " . $wrapper->field_efternavn->value(); ?><br/>
		<?php echo $Addresse_data['thoroughfare'] ?><br/>
		<?php echo $Addresse_data['postal_code'] . " " . $Addresse_data['locality']  ?><br/>
                </b>
	</div>
	<div style="float:right;width:50%;text-align: right;">
	<img style="height:100px;" src="http://historienshus.dk/~/media/Spots/Subsites/Historiens%20Hus/stadsarkivet_logo215x106%20copy.ashx"><br/><br/>
	<b>By- og Kulturforvaltningen<br/>
	Odense Kommune<br/><br/>
	Klosterbakken 2<br/>
	5000 Odense C<br/>
        Tlf 6551 4427<br/>
        ibu@odense.dk
        </b>
	</div>
	<div style="float:left;width:75%;">
        <p><?php echo strtolower(date("j. F Y")) ?></p>
	<p style="text-decoration: underline;"><?php echo "Vedr. " . $wrapper->field_sted->value()->name . ", Klosterbakken 2" ?></p>
	<p>Hermed bekræftes, at <?php echo $wrapper->field_sted->value()->name ?> er reserveret til jer <?php echo $start_date  ?>,
		  kl.<?php echo $start_time ?> -<?php echo $slut_time ?>.</p>
    <p>Som det vil være bekendt, har der pågået drøftelser i Odense Kommune
	   vedrørende indførelse af brugerbetaling for benyttelsen af lokalerne på
	   Klosterbakken 2.</p>
	<p>
		Dette arbejde er nu bragt til ende med beslutning om at der fremover skal
		betales leje for brugen af lokalerne af Klosterbakken 2. Lejen dækker
		udgifter til lys, varme samt slutrengøring af lokalet.
	</p>
	<p>
		Det bemærkes, at arrangementer, der afholdes med baggrund i
		Folkeoplysnings-loven, er gratis.
	</p>
	<p>
		Satserne fremgår af vedlagte Retningslinier for brug/leje af Klosterbakken
		2, idet retningslinierne samtidig med fastlægger de øvrige
		betingelser/regler for brug af Klosterbakken 2.
	</p>
	<p>
		På den baggrund fremsendes tillige kontrakt for Deres leje af ovennævnte
		lokale. Såfremt De ønsker at benytte lokalet som ovenfor anført, bedes De
		underskrive kontrakten og returnere den hertil<?php
                if($wrapper->field_aktuel_leje->value() == 0)
                {
                    echo ".";
                }
                else
                {
                    echo ", samtidig med der inden 14
                            dage fra dato indbetales kr. ".$wrapper->field_aktuel_leje->value()." i kontanter eller med check.";
                }
                ?>
	</p>
	<p>
		For arrangementer under Folkeoplysningsloven bedes ud over den
		underskrevne kontrakt fremsendt dokumentation for tilskud/tilsagn om
		tilskud fra Odense Kommune.
	</p>
	<p>
		Med venlig hilsen
	</p>
	<p>
                Ingrid Bundgaard<br/>
		Historiens Hus
		
	</p>
        </div>
	<!-- 
	Page2
	-->
        <div style="width: 100%;">
            	<div style="float:left;width:50%;padding-top: 140px;">
		<b>
		<?php echo $wrapper->field_fornavn->value() . " " . $wrapper->field_efternavn->value(); ?><br/>
		<?php echo $Addresse_data['thoroughfare'] ?><br/>
		<?php echo $Addresse_data['postal_code'] . " " . $Addresse_data['locality']  ?><br/>
                </b>
                </div>
                <div style="float:right;width:50%;text-align: right;">
                <img style="height:100px;" src="http://historienshus.dk/~/media/Spots/Subsites/Historiens%20Hus/stadsarkivet_logo215x106%20copy.ashx"><br/><br/>
                <b>By- og Kulturforvaltningen<br/>
                Odense Kommune<br/><br/>
                Klosterbakken 2<br/>
                5000 Odense C<br/>
                Tlf 6551 4427<br/>
                ibu@odense.dk</b>
                </div>
        <div style="float:left;width:100%;padding-top: 25px;text-align:center;">
            <p>NØGLEKVITTERING</p>
        </div>
        <div style="float:left;width:100%;">
            <p>For modtagelse af nøgle nr._____________________ </p>
            <p>i forbindelse med lån af <?php echo $wrapper->field_sted->value()->name ?> den. <?php echo $start_date  ?> kvitteres hermed:</p>
            <p><span style="padding-right:5em">Dato:____________</span><span>Underskrift:___________________________</span></p><br/>
            <hr>
            <p>Nøglen er modtaget retur den._______________</p>
            <p>Bemærkninger:</p><br/><br/><br/><br/>
            <p>Hvis der er forhold, der ikke svare til det forventede, eller hvis der er forslag<br/>til forandringer og forbedringer, hører vi gerne nærmere </p>
            <p>
		Med venlig hilsen
            </p>
            <p>Ingrid Bundgaard</p>
            <p>
                    Historiens Hus<br/>
                    Klosterbakken 2<br/>
                    5000 Odense C<br/>
            </p>
        </div>
	</div>
</div>
</body>
</html>