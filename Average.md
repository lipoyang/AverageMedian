# Average (移動平均クラス)

## Average_create(TYPE, size, average)

Average(移動平均クラス)のインスタンスを生成するマクロ。
* TYPE : intやfloatなどの数値型を指定
* size : 移動平均を取るサンプル数
* average : 生成するインスタンスの名前

## average.value
移動平均値。型は上記のTYPE。

## average.init()
移動平均演算を初期化する。

## ave = average.calc(val)
移動平均を計算する。
* TYPE val : 入力データ
* TYPE ave : 移動平均値
