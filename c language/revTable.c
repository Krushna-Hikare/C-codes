#include<stdio.h>
#include<conio.h>
int main(){
    int n,i=10;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i;i>=1;i--){
        printf("%d \n",n*i);
    }
    return 0;
}