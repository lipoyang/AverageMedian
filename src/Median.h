#ifndef _MEDIAN_H_
#define _MEDIAN_H_

#ifdef MEDIAN_MEMORY_SAVE
#include "Median_MemorySave.h"
#else

// 線形リスト構造体
template <typename TYPE>
struct MedianList {
    TYPE value;
    MedianList *next;
};

// 移動中央値演算器
template <typename TYPE>
class Median
{
public:
    TYPE value;             // 中央値

private:
    int  size;              // 線形リストのバッファのサイズ
    MedianList<TYPE> *buff; // 線形リストのバッファ
    MedianList<TYPE> root;  // 線形リストのルート
    int   index;            // インデックス
    bool  isFirst;          // 最初のサンプルか？

public:
    // コンストラクタ
    Median(MedianList<TYPE> *buff, int size)
    {
        this->buff = buff;
        this->size = size;
        this->isFirst = true;
    }

    // 初期化する
    void init()
    {
        isFirst = true;
        value = 0;
    }

    // 中央値を計算する
    // input_val: 入力データ
    // return: 中央値
    TYPE calc(TYPE input_val)
    {
        if (isFirst)
        {
            // 最初のデータときに線形リストを初期化する。
            MedianList<TYPE> *node = &root;
            for (int i = 0; i < size; i++) {
                MedianList<TYPE> *new_node = &buff[i];
                new_node->value = input_val;
                node->next = new_node;
                node = node->next;
            }
            value = input_val;
            index = 0;
            isFirst = false;
        }
        else
        {
            // (1) いちばん古いデータを捨てる
            MedianList<TYPE> *node = &root;
            for (int i = 0; i < size; i++) {
                if (node->next == &buff[index]) {
                    // つなぎかえ(ノード削除)
                    node->next = node->next->next;
                    break;
                }
                else {
                    node = node->next;
                }
            }
            // (2) 新しいデータを挿入
            MedianList<TYPE> *new_node = &buff[index]; // (1)で削除したノードの再利用
            new_node->value = input_val;
            node = &root;
            bool inserted = false;
            for (int i = 0; i < size - 1; i++) {
                if (new_node->value > node->next->value) {
                    // つなぎかえ(ノード挿入)
                    new_node->next = node->next;
                    node->next = new_node;
                    inserted = true;
                    break;
                }
                else {
                    node = node->next;
                }
            }
            if (!inserted) {
                node->next = new_node;
            }
            // (3) 中央値を取得
            node = &root;
            for (int i = 0; i < size / 2; i++) {
                node = node->next;
            }
            if ((size & 1) == 0) {
                value = (node->value + node->next->value) / 2; // 偶数個なら中央の2個の平均を取る
            }else{
                value = node->next->value; // 奇数個なら中央の値を取る
            }

            // index更新
            index++;
            if (index >= size) index = 0;
        }
        return value;
    }
};

// Medianのインスタンスを生成するマクロ
#define Median_create(TYPE, size, name) \
    MedianList<TYPE> _ ## name ## _buff[size]; \
    Median<TYPE> name(_ ## name ## _buff, size)

#endif

#endif
