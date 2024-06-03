//Creation of structure
#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct address{
    int houseno;
    int block;
    char city[100];
    char name[100];
} add;

int main(){
    add s[5];
    scanf("%d",&s[0].houseno);
    scanf("%d",&s[0].block);
    scanf("%s",s[0].city);
    scanf("%s",s[0].name);

    printf("%d\t",s[0].houseno);
    printf("%d\t",s[0].block);
    printf("%s\t",s[0].city);
    printf("%s\n",s[0].name);

    scanf("%d",&s[1].houseno);
    scanf("%d",&s[1].block);
    scanf("%s",s[1].city);
    scanf("%s",s[1].name);

    printf("%d\t",s[1].houseno);
    printf("%d\t",s[1].block);
    printf("%s\t",s[1].city);
    printf("%s\n",s[1].name);

    scanf("%d",&s[2].houseno);
    scanf("%d",&s[2].block);
    scanf("%s",s[2].city);
    scanf("%s",s[2].name);

    printf("%d\t",s[2].houseno);
    printf("%d\t",s[2].block);
    printf("%s\t",s[2].city);
    printf("%s\n",s[2].name);
    
    scanf("%d",&s[3].houseno);
    scanf("%d",&s[3].block);
    scanf("%s",s[3].city);
    scanf("%s",s[3].name);

    printf("%d\t",s[3].houseno);
    printf("%d\t",s[3].block);
    printf("%s\t",s[3].city);
    printf("%s\n",s[3].name);

    scanf("%d",&s[4].houseno);
    scanf("%d",&s[4].block);
    scanf("%s",s[4].city);

    printf("%d\t",s[4].houseno);
    printf("%d\t",s[4].block);
    printf("%s\t",s[4].city);
    printf("%s\n",s[4].name);
    _getch();
    return 0;
}