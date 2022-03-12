#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice, num1, num2;
    printf("You will have four choices to execute 4 different calculations : \n");
    printf("1. Addition\n2. Odd-even\n3. Repeat numbers upto N\n4. Repeat number in reverse order upto N\n");
    printf("Enter your choice number : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the numbers you want to add : \n");
        scanf("%d%d", &num1, &num2);
        printf("Sum of %d and %d is : %d", num1, num2, num1+num2);
        break;
    case 2:
        printf("Enter the number : ");
        scanf("%d", &num1);
        if (num1 % 2==0)
        {
            printf("This is an EVEN number");
        }
        else printf("This is an ODD number");
        break;
        
    case 3:
        printf("Enter the number upto which you want to repeat : ");
        scanf("%d", &num1);
        for ( int i = 0; i <= num1; i++)
        {
            printf("%d\n", i);
        }
        break;
          
    case 4:
        printf("Enter the number upto which you want to repeat in reverse order : ");
        scanf("%d", &num1);
        for ( int i = num1; i >= 0; i--)
        {
            printf("%d\n", i);
        }
        break;

    default: printf("Invalid Choice! Choose again!\n");
        break;
    }
    return 0;

}