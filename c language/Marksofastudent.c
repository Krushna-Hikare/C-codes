//the ... might not work on all the compilers so avoid using it
#include<stdio.h>
#include<conio.h>
int main(){
    printf("Enter marks of the student:\n");
    int a;
    scanf("%d",&a);
    switch (a){
        case 0 ... 20: printf("C grade\n");
        break;
        case 30 ...69: printf("B grade\n");
        break;
        case 70 ... 89 :printf(" grade is A\n");
        break;
        case 90 ... 100: printf("Grade is A+\n");
        break;
        default:printf("Marks limit is 0 to 100\n");
    }
    printf("enter any key to close:");
    _getch();
    return 0;

}