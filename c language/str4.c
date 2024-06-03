#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[100],n,m;
    fgets(str,100,stdin);
    scanf("%d %d",&n,&m);
    int j=0;
    for(int i=n;i<=m;i++,j++){
        printf("%c",str[j]);
    }
}
