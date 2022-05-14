// WAP to count the number of times every character occurs in the string.

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int len;
    printf("enter the string: ");
    scanf("%s", &str);
    len = strlen(str);
    printf("count: %d", len);
    return 0;
}