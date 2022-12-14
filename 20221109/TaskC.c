#include <stdio.h>
#include <stdlib.h>
int main(){
    int size = 100;
    int data[size];
    int valueA;
    int valueB;
    int max;
    int min;
    int target = 50;
    int result = -1;
    int left = 0;
    int right = data[size] - 1;
    int mid;

    for(int i = 0; i < size; i++) {    
        data[i] = rand() % 100 + 1;
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

    for(left = 0;left < right;left++){
        mid = (left + right) / 2;
        if(data[mid]==target){
            result = mid;
            break;
        }
        else if(data[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid;
        }        
    }
    for(int i = 0; i <= size; ++i){
        printf("data:%d\n", data[i]);
    }
    if(result >= 0){
        printf("target no indekkusu ha %d desu\n", result);
    }
    else{
        printf("target ha mitukarimasenndesita\n");
    }
}