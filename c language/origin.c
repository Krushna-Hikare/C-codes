#include<stdio.h>
#include<conio.h>
void IFf();

void IFf(){
    char a;
    printf("Are you from India(I) or France(F):");
    scanf("%s",&a);
    if (a=='I'){
        printf("Namaste");
    }
    else if (a =='F'){
        printf("Bonjour");   
    }
    else{
        printf("Incorrect Input");
    }
}

int main(){
    IFf();
    _getch();
    return 0;
}