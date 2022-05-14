//WAP to multiply any two 3x3 matrices.
#include<stdio.h>
void main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i, j;
    printf("enter the value of matrix 'A' 3 by 3: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the value of matrix 'B' 3 by 3: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            c[i][j] = a[i][j] * b[i][j];
        }
    }
    printf("Addition of martix 'A' and 'B' is here\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
