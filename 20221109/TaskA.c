#include<stdio.h>
#include <stdlib.h>

void shuffle(int array[],int size);

int main(){
    int data[11] = {0,1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(data);
    int result = -1;
    int target = 5;
    
    shuffle(data, size);
    for (int i = 0; i < size; ++i) {
        if(data[i] == target){
            result = i;
        }
    }
    printf("targetのインデックスはresultです%d\n",result );
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

