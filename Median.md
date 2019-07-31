<style>
h1 {
  color: #00979D;
}
h2 {
  color: #00979D;
  border-left: 9px solid #00979D;
  border-bottom: 1px solid #00979D;
  padding: 2px 0 2px 0.5em;
}
h3 {
  color: #EC9122;
}
</style>

# Median (移動中央値クラス)

## Median_create(TYPE, size, median)

Median(移動中央値クラス)のインスタンスを生成するマクロ。
### 引数
* TYPE : intやfloatなどの数値型を指定
* size : 移動中央値を取るサンプル数
* median : 生成するインスタンスの名前

## median.value
移動中央値。型は上記のTYPE。

## median.init()
移動中央値演算を初期化する。

## median.calc(val)
移動中央値を計算する。
### 引数
* TYPE val: 入力データ
### 戻り値
* TYPE : 移動中央値