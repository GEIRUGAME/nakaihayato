#include <stdio.h>
#include <stdlib.h>
int main(){

    int size = 100;
    int data[size];
    int valueA;
    int valueB;
    int max;
    int min;
    for(int i = 0; i < size; i++) {    
        data[i] = rand() ;
    }
    
    for(int i = 0; i < size; ++i){
        for(int j = size - 1; j >= i + 1; --j){
            valueA = data[i];
            valueB = data[j];
            if(valueA > valueB){
                max = valueA;
                min = valueB;
                data[i] = min;
                data[j] = max;
            }
        }
    }
    
    for(int i = 0; i <= size; ++i){
        printf("data:%d\n", data[i]);
    }
}