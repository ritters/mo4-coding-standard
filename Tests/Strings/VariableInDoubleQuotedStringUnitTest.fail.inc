<?php

$a = "$a";
$a = "\\\\$a";
$a = "blafasel $a $b";
$b = "blafasel \\$a$b";
$d = "blafasel $$a";
$d = "blafasel $_a";
$f = "100$missing needed";
$g = "foo {$a} bar $b";
$h = " foo } bar { foo $a";
