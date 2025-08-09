#include <stdio.h>

void swap(int *p1,int *p2){
    int troca = *p1;
    *p1 = *p2;
    *p2 = troca;
}


int main(){
    int canal1,canal2;
    scanf("%d %d", &canal1, &canal2);
    int *p1 = &canal1;
    int *p2 = &canal2;
    swap(p1,p2);
    printf("%d %d\n", *p1, *p2);
    return 0;
}