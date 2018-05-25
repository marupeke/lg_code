# lg.c
## usage
ex) foobar.txt 内にある foo, bar, baz を foofoo, barbar, bazbaz に置換する

```
$ ls
  foo  bar  baz
$ ls | lg sed s/%/%%/g foobar.txt > sedfile.bat
$ chmod +x sedfile.bat
$ ./sedfile.bat
```

メタ文字 `%` が `lg` への入力リストに変換されて出力される
