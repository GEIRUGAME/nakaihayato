#include<stdio.h>

int main() {
    srand(time(NULL));
    int i=rand()%10+1;
    printf("%d\n",i);
    return 0;
}