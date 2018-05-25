# lg.c
## usage
ex) ファイル foo, bar, baz を foofoo, barbar, bazbaz に名前変更する

```
$ ls
  foo  bar  baz
$ ls | lg mv % %% > mvfile.bat
$ chmod +x mvfile.bat
$ ./mvfile.bat
```

メタ文字 `%` が `lg` への入力リストに変換されて出力される
