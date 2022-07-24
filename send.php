<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
   
</head>
<body>
<?php
     $to      = 'meriemtrabelsi@isticbc.org';
     $subject = 'le sujet';
     $message = 'Bonjour !';
     $headers = 'From: mariem.trabelsi@istic.ucar.tn' . "\r\n" .
     'Reply-To: mariem.trabelsi@istic.ucar.tn' . "\r\n" .
     'X-Mailer: PHP/' . phpversion();

     mail($to, $subject, $message, $headers);
 ?>
     <h1>you're welcome</h1>
</body>
</html>
