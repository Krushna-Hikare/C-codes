#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    FILE *f;
    f=fopen("X.txt","r");
    char ch;
    fscanf(f,"%c",&ch);
    fclose(f);

}