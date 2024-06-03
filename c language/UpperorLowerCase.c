/*to check if the character is upper case or lower case*/
#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z'){
        printf("The character is a upper case letter.\n");
    }else if(ch>='a' && ch<='z'){
        printf("Lower Case character\n");
    }else{
        printf("Not a letter from english alphabet\n");
    }
    return 0;
}