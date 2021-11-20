#include <stdio.h>
/*
 Name:Kaveh Masoudinia
 Exercise:Factorial
 Date:11/06/2021(1400/08/14)
 */
int fact(int);

int main()
{
    int  n , factorial;

    printf("Enter a number :");
    scanf("%d", &n);
    factorial=fact(n);
    printf("Factorial = %d\n" ,factorial);

}
int fact(int n)
{
    int c,f=1;
    for(c = 1; c <= n; c++)
    {
        f = f * c;
    }
    return f;
}