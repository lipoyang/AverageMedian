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

# Average (移動平均クラス)

## Average_create(TYPE, size, average)

Average(移動平均クラス)のインスタンスを生成するマクロ。
### 引数
* TYPE : intやfloatなどの数値型を指定
* size : 移動平均を取るサンプル数
* average : 生成するインスタンスの名前

## average.value
移動平均値。型は上記のTYPE。

## average.init()
移動平均演算を初期化する。

## average.calc(val)
移動平均を計算する。
### 引数
* TYPE val: 入力データ
### 戻り値
* TYPE : 移動平均値