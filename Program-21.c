// WAP to print the multiplication table of the number entered by the user.

#include<stdio.h>
int main(){
    int i, j;
    printf("enter the digits for table: ");
    scanf("%d", &i);
    for(j=1; j<=10; j++){
        printf("%d * %d = %d\n", i,j, i*j);
    }
    return 0;
}
