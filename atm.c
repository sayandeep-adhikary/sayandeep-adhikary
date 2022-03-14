#include<stdio.h>
int main(int argc, char const* argv[])
{
    int card, lang, bal, amount, sel, pin1, pin2, pin;
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
    label:
        printf("1. Balance Check\n\n2. Withdrawl\n\n3. Set PIN\n");
        scanf("%d", &bal);
        switch (bal)
        {
        case 1:
            printf("YOUR ACCOUNT BALANCE IS 100,000 $\nPress 1 to go back to previous menu or 0 to exit\n");
            scanf("%d", &bal);
            if (bal == 1)
            {
                goto label;
            }
            else if (bal == 0)
            {
                printf("Thank you! Have a nice day");
                goto end;
            }
            break;

        case 2:
            amount1:
                printf("Enter amount\n");
                scanf("%d", &amount);
                if (amount > 100000)
                {
                printf("YOU DO NOT HAVE ENOUGH BALANCE IN YOUR ACCOUNT! PLEASE TRY AGAIN!\n");
                goto amount1;
                }
                else printf("1. Savings\n\n2. Current\n");
            scanf("%d", &sel);
            switch (sel)
            {
            case 1:
                printf("You have selected Savings account\n\nEnter your pin now.\n***MAKE SURE NO ONE CAN SEE YOUR PIN***\n");
                break;
            case 2:
                printf("You have selected Current account\n\nEnter your pin now.\n***MAKE SURE NO ONE CAN SEE YOUR PIN***\n");
                break;
            }
            break;
        case 3:
            pin3:
                printf("Enter your pin : ");
                scanf("%d", &pin1);
                printf("Enter again to confirm : ");
                scanf("%d", &pin2);
                if (pin1==pin2)
                {
                    printf("PIN SET SUCCESSFULLY!");
                    goto end;
                }
                else if (pin1!=pin2)
                
                {
                    printf("ERROR! PIN DID NOT MATCH!!! TRY AGAIN!\n");
                    goto pin3;
                }
                goto end;
        
        
        }
    scanf("%d", &pin);
    printf("YOU HAVE ENTERED ****\nPlease wait...\n\n\nTRANSACTION SUCCESSFUL! TAKE YOUR CARD OUT.\n");
    printf("Available balance = %d", 100000-amount);
    end:
        return 0;
}

