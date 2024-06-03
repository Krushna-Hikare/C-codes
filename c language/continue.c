#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    do{
        printf("Enter a number:");
        scanf("%d",&n);
        if(n==6){
            continue;
        }
        printf("The entered number is %d\n",n);
    }while(n<=100);
    _getch();
    return 0;
}