/*Calculate Factorial, Sum of digits & Reverse a number using recursive and non
recursive functions.*/

#include <stdio.h>

// Calculate Factorial
int fact_recursive(int n)
{
    if (n > 0)
    {
        return n * fact_recursive(n - 1);
    }
    else
    {
        return 1;
    }
}
int fact_non_recursive(int n)
{
    int m = 1;
    for(int i =1; i<=n; i++){
        m = m * i;
    }
    return m;
}

// sum of digits

int Sum_of_digits(int num){
    int rem,sum=0;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("the sum of digits is %d",sum);
}
int main()
{
    int n,x,y, num;

    printf("enter the number: ");
    scanf("%d", &n);
    x = fact_recursive(n);
    printf("factorial: %d\n", x);
    y = fact_non_recursive(n);
    printf("factorial: %d", y);

    printf("enter the 4 digits number: ");
    scanf("%d",&num);
    Sum_of_digits(num);
    
    return 0;
}