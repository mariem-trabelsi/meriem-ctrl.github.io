<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
   
</head>
<body>
    <?php
    $destinataire="meriemtrabelsi@isticbc.org";
    $sujet="test mail";
    $contenu="ça fonctionne mariouma";
    $headers= "From:mariem.trabelsi@istic.ucar.tn";
    mail($destinataire,$sujet,$contenu,$headers);
    ?>
    
</body>
</html>
