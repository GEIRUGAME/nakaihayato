#include <stdio.h>
#include <stdlib.h>
int Stack[];
int main(){
    int size = 5;
    int data[size];
    int pop;
    int DLdate = 0;
    for(int i = 1; i <= 5; ++i){
        data[i] = DLdate + i;
        DLdate += 1;
        printf("data:%d\n", data[i]);
    }
    return 0;
}

void Push(){

}
void pop(){

}