#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

    int data[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<=10;i++){
        data[i]=rand();
    }
    for(int i=1;i<=10;i++){
        printf("%d\n",data[i]);
    }

    return 0;
}