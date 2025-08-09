// labirinto maluco com |a-b| (a+1,a-2,a+4) até achar b e conta os passos
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    long int a,b,pot,soma,conferir;
    scanf(" %ld %ld",&a,&b);
    soma=0;
    conferir=a;
    pot=1;
    int i=1;
    while(conferir!=b){
        if ((i%2)!=0){
            for (int a1=conferir;a1<(a+pot);a1++){
                conferir=conferir+1;
                soma=soma+1;
                if (conferir==b) break;
            }  
        }
        else{
            for (int a2=conferir;a2>(a-pot);a2--){
                conferir=conferir-1;
                soma=soma+1;
                if (conferir==b) break;
            } 
        }
        pot=pot*2;
        i++;
    };
    printf("%ld",soma);
    return 0;
}