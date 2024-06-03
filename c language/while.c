#include<stdio.h>
#include<conio.h>
int main(){
    char ch='a';
    while(ch<='z'){
        printf("%c\n",ch++);
    }
    _getch();
    return 0;
}