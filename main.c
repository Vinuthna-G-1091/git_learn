
#include<stdio.h>
// using namespace std;

int main(int*argc,int *argv){
    if(*argc!=2){
        printf("%d",*argc);
    }else{
        printf("%d %d",argv[0],argv[1]);
    }
    printf("added new print statement");
    return 0;
}