//Print of String without %s
#include<stdio.h>
#include<conio.h>

int main(){
    char A[]="King";
    char B[]="Krushna";
    
    for(int i=0; A[i]!='\0';i++){
        printf("%c",A[i]);

    }
    printf("\n");
    for(int i=0; B[i] != '\0';i++){
        printf("%c",B[i]);

    }
    return 0;
}