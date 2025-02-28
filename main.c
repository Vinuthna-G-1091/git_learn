#include<stdio.h>
int main(int*argc,int *argv){
    if(*argc!=2){
        printf("%d",*argc);
    }else{
        printf("%d %d",argv[0],argv[1]);
    }
}