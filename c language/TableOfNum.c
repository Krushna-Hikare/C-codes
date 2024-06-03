#include<stdio.h>
#include<conio.h>
int main(){
    int i=1,n;
    printf("Enter the number whose table u want:");
    scanf("%d",&n);
    while(i<=10){
        printf("%d\n",n*i);
        i++;
    }
    _getch();
    return 0;
}