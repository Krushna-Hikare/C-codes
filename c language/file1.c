#include<stdio.h>
#include<conio.h>

int main(){
    FILE *fptr;
    fptr=fopen("Text","w");
    fputc('c',fptr);
    printf("%c",fgetc(fptr));
    fclose(fptr);
}