#!/usr/bin/php
<?php
  //foreach ループ内で条件をチェック
   foreach(file('/usr/share/dict/words') as $line){
  // strpos() 関数を使って、文字列 "xy" が含まれる単語を echo "$line"; で表示
     if (strpos($line, 'xy') !== false) {
      echo "$line\n";
    }
  } 
?>
