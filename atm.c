#include<stdio.h>
int main(int argc, char const *argv[])
{
    int card, lang, bal, amount, sel, pin;
    printf("PLEASE INSERT YOUR CARD\n");
    printf("If you have entered your card, enter 1\n");
    scanf("%d", &card);
    switch (card)
    {
    case 1:
        printf("Now select your preferred language\nFor 'English' press 3\nFor 'Hindi' press 4\n");
        scanf("%d", &lang);
        switch (lang)
        {
        case 3:
            printf("You have choosen English\n");
            break;
        case 4:
            printf("You have choosen Hindi\n");
            break;
        
        default:
            printf("ERROR! Enter card again\n");
            break;
        }
    }
    printf("1. Balance Check\n\n2. Withdrawl\n\n3. Set PIN\n");
    scanf("%d", &bal);
    switch (bal)
    {
    case 1:
        printf("YOUR ACCOUNT BALANCE IS 100,000 $");
        break;
    case 2:
        printf("Enter the amount\n");
        scanf("%d", &amount);
        if (amount>=100000)
        {
            printf("ERROR! YOU DO NOT HAVE ENOUGH BALANCE! TRY AGAIN!");
        }
        else
            printf("YOU HAVE ENTERED '%d $'\n", amount);
    }
    printf("Press 1 to continue and 0 to exit : ");
    scanf("%d", &amount);
    if (amount==1)
    {
        printf("1. Savings\n\n2. Current\n");
    }
    if (amount==0)
    {
        printf("Thank you! Have a nice day!");
    }
    scanf("%d", &sel);
    switch (sel)
    {
    case 1:
        printf("Enter your pin now.\n***MAKE SURE NO ONE CAN SEE YOUR PIN***\n");
        break;
    case 2:
        printf("Enter your pin now.\n***MAKE SURE NO ONE CAN SEE YOUR PIN***\n");
        break;
    }
    scanf("%d", &pin);
    printf("You have entered ****\nPlese wait...\n\n\nTRANSACTION SUCCESSFUL! TAKE YOUR CARD OUT");
    return 0;
}
