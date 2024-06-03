#include<stdio.h>

int main(){
    int a=24;
    int *n=&a;
    int m=*n;
    printf("%d %u %u %u",a,n,m,*(&a));
    return 0;
}
