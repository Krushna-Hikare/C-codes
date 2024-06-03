#include<stdio.h>
#include<conio.h>
int main(){
    int n,m=0,i=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do{
        m+=i;
        i++;
    }while(i<=n);
    printf("The sum of 0 to %d is %d.",n,m);
    _getch();
    return 0;
}