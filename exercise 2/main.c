#include <stdio.h>
/*
 Name:Kaveh Masoudinia
 Exercise 2
 Date:11/09/2021(1400/08/18)

 */

int main() {
    int NumberOne,NumberTwo,C,Calculator;
    printf("\nEnter two number and one character:\n");
    scanf("%d %d %c", &NumberOne, &NumberTwo,&C);

    Calculator=NumberOne*NumberTwo;


    printf( "%c %d %c" ,C,Calculator, C);/* برای ذخیره یک کارکتر از c% استفاده شده است */

    return 0;
}
