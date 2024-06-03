#include<stdio.h>
#include<conio.h>
void printhello();//function declaration/prototype
void printgb();//function declaration/prototype
int main(){
    printhello();//function call
    printgb();//function call
    _getch();
    return 0;
}
void printhello(){//main body of the function
    printf("Hello\n");
}
void printgb(){//main body of the function
    printf("Good Bye\n");
}