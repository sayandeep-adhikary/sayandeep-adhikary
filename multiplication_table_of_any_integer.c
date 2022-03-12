#include<stdio.h>

int main()
{
    /* print a multiplication table of a number entered by the user in pretty form
    example:-
    enter the number you want multiplication of:
    6
    output:
    THE MULTIPLICATION TABLE of 6:
    6x1=6
    6x2=12
    6x3=18
    6x4=24
    6x5=30
    6x6=36
    6x7=42
    6x8=48
    6x9=54
    6x10=60 */

    int a;
    printf("Enter the number you want the multiplication table of\n");
    scanf("%d",&a);

    printf("THE MULTIPLICATION TABLE OF %d",a);
    printf(":\n %d",a);

    printf(" x 1 = %d\n",a*1);
    printf(" %d",a);

    printf(" x 2 = %d\n",a*2);
    printf(" %d",a);
    printf(" x 3 = %d\n",a*3);
    printf(" %d",a);

    printf(" x 4 = %d\n",a*4);
    printf(" %d",a);

    printf(" x 5 = %d\n",a*5);
    printf(" %d",a);

    printf(" x 6 = %d\n",a*6);
    printf(" %d",a);

    printf(" x 7 = %d\n",a*7);
    printf(" %d",a);

    printf(" x 8 = %d\n",a*8);
    printf(" %d",a);

    printf(" x 9 = %d\n",a*9);
    printf(" %d",a);

    printf(" x 10 = %d\n",a*10);
    
    return 0;
}
