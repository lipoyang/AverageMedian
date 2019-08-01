# AverageMedian
組込みマイコン向けの移動平均・移動中央値演算クラスライブラリ

## 特徴
* C++で記述されたクラスライブラリ (組込み系でもC++がしたい！)
* malloc, new, STLなどは使わず、メモリは静的に確保する
* テンプレートにより、float や int などの種々の数値型に対応
* 計算量とRAM使用量をなるべく減らしたアルゴリズム
* 処理の単純化のため、最初の計算は少し手抜き

## 使い方
* srcフォルダのAverage.hとMedian.hを適当にコピーして使ってください。
* Arduinoの場合は、このフォルダ(AvrerageMedian)をまるごとlibrariesフォルダの下にコピーしてください。

## リファレンス
* [Average(移動平均クラス)](Average.md)
* [Median(移動中央値クラス)](Median.md)

## サンプルコード
* test/test.cppを見てください。テストデータの移動平均と移動中央値を計算して期待値と照合します。
* Arduinoの場合は、ファイル > スケッチ例 > AverageMedian > AverageMedianTest でサンプルスケッチが開きます。

## Thanks
移動中央値のアルゴリズムに関しては@lamrongol氏の下記の記事を参考にしました。線形リストを用いた素朴なアルゴリズムに比べてRAM使用量も処理速度も改善しました。
* [「移動中央値」の計算 - Qiita](https://qiita.com/lamrongol/items/91c2d6819c1b9e8aae79)
