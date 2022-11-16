#include <stdio.h>
#include <stdlib.h>

void shuffle(int array[], int size);

int main() {
    int data[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    // 今の配列がどうなってるかを出力 = 初期化できているかどうか

    int all = sizeof(data); // 全体のバイト数 sizeof(data)
    int one = sizeof(data[0]); //　1つのバイト数 sizeof(data[0])
    int size = all / one ; // data1の要素数 size
    // sizeを出力 = 処理に必要な値が計算できているか
    printf("size:%d\n", size);

    int result = -1;
    int target = 5;
    
    shuffle(data, size);
    // 今の配列がどうなっているかを出力 = シャッフルできているかどうか

    for (int i = 0; i < size; ++i) {
        if(data[i] == target){
            result = i;
            break;
        }
    }

    // 結果を出力
    printf("target noindekkusuha %d desu\n", result);
    return 0;
}

void shuffle(int array[], int size) {
    for(int i = 0; i < size; i++) {
        int j = rand()%size;
        int t = array[i];
        array[i] = array[j];
        array[j] = t;
    }
}

