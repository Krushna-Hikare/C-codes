//fgets/puts
#include<stdio.h>
#include<conio.h>

int main(){
    char Name[20];
    char Names[20];
    gets(Names); //Don't use gets its unsafe.
    puts(Names);
    fgets(Name,20,stdin);
    
    printf("%s",Name);
}