//enter odd number to break
#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    do{
        printf("Enter a number and odd number to break:\n");
        scanf("%d",&n);
        if(n%2!=0){
            break;
        }
    }while(1);
    _getch();
    return 0;
}