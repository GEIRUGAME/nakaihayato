#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

    int data[10];
    for(int i=1;i<=10;i++){
        data[i]=rand();
        printf("%d\n",data[i]);
    }

    return 0;
}