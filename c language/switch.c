//m=monday,t=tuesday,T-thursday,f=friday,S=saturday,s=sunday
#include<stdio.h>
int main(){
    char a;
    printf("Enter a char:");
    scanf("%s",&a);
    switch (a){
        case 'm': printf("Monday");
        break;
        case 't': printf("tuesday");
        break;
        case 'w': printf("wednesday");
        break;
        case 'T': printf("thursday");
        break;
        case 'f': printf("friday");
        break;
        case 'S': printf("saturday");
        break;
        case 's': printf("Sunday");
        break;
        default: printf("Not a valid day");
    }
    return 0;
}