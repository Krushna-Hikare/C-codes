#include<stdio.h>

int main(){
    int a,i;
    scanf("%d",&a);
    for(i=0;a!=0;i++){
        a=a/10;
    }
    printf("%d",i);
}

