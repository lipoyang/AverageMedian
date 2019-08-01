// 移動平均値と移動中央値のテスト

#include <stdio.h>
#include <math.h>
#include "../src/Average.h"
#include "../src/Median.h"
#include "test_data2.h" // テスト用入力データと期待値データ (Excelで作成)

// float型・32サンプルの移動平均値演算器の生成 (マクロ)
Average_create(float, 31, average);
// float型・32サンプルの移動中央値演算器の生成 (マクロ)
Median_create(float, 31, median);

int main(void)
{
    // 移動平均値のテスト
    int error = 0;
    average.init(); // 初期化
    for (int i = 0; i < DATA_SIZE; i++) {
        float output_val = average.calc(input_data[i]); // 移動平均値の計算

        if (fabs(output_val - average_data[i]) > 0.001) { // 実数型なので完全一致でなく誤差で判定
            error++;
            printf("ERROR! ");
            printf("%f %f %f\n", input_data[i], average_data[i], output_val);
        }
    }
    if (error == 0) {
        printf("Average OK\n");
    }else{
        printf("Average NG\n");
    }

    // 移動中央値のテスト
    error = 0;
    median.init(); // 初期化
    for (int i = 0; i < DATA_SIZE; i++) {
        float output_val = median.calc(input_data[i]); // 移動中央値の計算

        if (fabs(output_val - median_data[i]) > 0.001) { // 実数型なので完全一致でなく誤差で判定
            error++;
            printf("ERROR! ");
            printf("%d %f %f %f\n", i, input_data[i], median_data[i], output_val);
        }
    }
    if (error == 0) {
        printf("Median OK\n");
    }else{
        printf("Median NG\n");
    }

    return 0;
}
