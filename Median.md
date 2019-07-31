# Median (移動中央値クラス)

## Median_create(TYPE, size, median)

Median(移動中央値クラス)のインスタンスを生成するマクロ。

* TYPE : intやfloatなどの数値型を指定
* size : 移動中央値を取るサンプル数
* median : 生成するインスタンスの名前

## median.value
移動中央値。型は上記のTYPE。

## median.init()
移動中央値演算を初期化する。

## med = median.calc(val)
移動中央値を計算する。
* TYPE val : 入力データ
* TYPE med : 移動中央値
