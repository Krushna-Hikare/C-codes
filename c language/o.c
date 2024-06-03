#include<stdio.h>


int main(){
    char arr[4][2];
    printf("Enter the name of the students:");
    scanf("%s %s",&arr[0][0],&arr[0][1]);
    printf("Enter marks of student 1:\t");
    scanf("%s %s %s",&arr[1][0],&arr[2][0],&arr[3][0]);
    printf("Enter marks of the student 2:\t");
    scanf("%s %s %s",&arr[1][1],&arr[2][1],&arr[3][1]);
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("%s ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
