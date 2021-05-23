<?php
$name = $_POST["user"];
$min = $_POST["min"];
$max = $_POST["max"];
$IP = $_SERVER["REMOTE_ADDR"];
$time = date("Y-m-d H:i:s");

$rec = $time . ' ' . $min . ' ' . $max . ' '. $name . ' ' . $IP . "\n";
$fname = "record.txt";

if (file_exists($fname)) 
	$fp = fopen($fname, "a");
else
	$fp = fopen($fname, "w");
fwrite($fp, $rec);
fclose($fp);
echo "Data is recorded\n";
?>