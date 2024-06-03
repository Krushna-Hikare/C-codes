//Bank account using structure
#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct BankAccount{
    char Name[100];
    int AccountNumber;
}BA;

int main(){
    BA x;
    char p[100];
    printf("Enter the name of THE costumer and account number:");
    scanf("%s",&p);
    strcpy(x.Name,p);
    scanf("%d",&x.AccountNumber);
    printf("%s %d",x.Name,x.AccountNumber);
}