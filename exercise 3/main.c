#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
/*
 Name:Kaveh Masoudinia
 Exercise 3
 Date:11/09/2021(1400/08/18)

 */

int main() {
    int id;
   char firstName[20], lastName[20];
    printf("Enter your Id,FirstName,LastName:\n");
    scanf("%d %s %s", &id, &firstName,&lastName);

    printf(" %d %s %s \a ", id , firstName , lastName );/* برای ذخیره رشته از s% استفاده شده است */


    printf("\n------------------------------------------------------------------------------");

#define str_size 100  /* سایز طول رشته را مشخص می کنیم*/
    char str[str_size];
   int alp, digit, splch, i;
   alp = digit = splch = i = 0;

 printf("\nEnter your words : ");
    scanf("%d",str);
    fgets(str, sizeof str, stdin);
   while(str[i]!='\0')
    {
       if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
           alp++;
      }
        else
      {
           splch++;
       }

        i++;
    }
    printf("Number of Alphabets in the string is : %d\n", alp);
   printf("Number of Special characters in the string is : %d\n", splch);
    printf("**%d**",alp);





    char s[1000],c1,c2;
   int  h;

    printf("\nEnter  the string : ");
    gets(s);

    printf("Enter a character replace: ");
   c1=getchar();
    getchar();
  printf("Enter character to replace  with  %c : ",c1);/*از c% برای دریافت یک کارکتر استفاده شده است*/
    c2=getchar();
   for(h=0;s[h];h++)
   {
        if(s[h]==c1)
       {
           s[h]=c2;

        }

    }

  printf("\nafter replace:%s",s);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int mult,a,b,c,f;
int forml;
int power;
    printf("\nEnter Three number for Multiplication:");
    scanf("%d %d %d",&a,&b,&c);
    mult=a*b*c;
    printf("\nMultiplication:%d",mult);
    forml=(24+64)/2;
    printf("\nFormula:%d",forml);
    f = (int)pow(3, 5);
    printf("\npower: %d", f);

    return 0;
}
