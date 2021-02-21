#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int counter,choice;
    int  pL;
    char randChar;
    while(1)
    {
        printf("-------PASSWORD CREATOR----\n");
        printf("Welcome to password creator\n");
        printf("What kind of password do you need?\n");
        printf("1.Password containing both uppercase and lowercase letters only\n");
        printf("2.A numeric PIN\n");
        printf("3.Password with lowercase and uppercase letters and numbers and special characters !@#$%^&*()\n");
        printf("4.Password with only lowercase letters\n");
        printf("5.Password with only uppercase letters\n");
        printf("6.Exit\n");
        printf("Enter your choice please:\n");
        scanf("%d",&choice);
        printf("Type in a password Length:(In case you are exiting enter any length) \n");
        scanf("%d",&pL);
        switch(choice)
        {
      case 1:
        {
            counter=0;
            srand(time(NULL)); //Seeding function for rand()
            while(counter<pL)
        {
            randChar="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz "[rand()%53];
            printf("%c",randChar);
            counter++;
        }
        printf("\n");
        break;
        }//end of case 1
      case 2:
        {
            counter=0;
            srand(time(NULL)); //Seeding function for rand()
            while(counter<pL)
        {
            randChar="0123456789 "[rand()%11];
            printf("%c",randChar);
            counter++;
        }
        printf("\n");
        break;
        }//end of case 2
      case 3:
        {
            counter=0;
            srand(time(NULL)); //Seeding function for rand()
            while(counter<pL)
        {
            randChar="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*() "[rand()%73];
            printf("%c",randChar);
            counter++;
        }
        printf("\n");
        break;
        }//end of case 3
      case 4:
        {
            counter=0;
            srand(time(NULL)); //Seeding function for rand()
            while(counter<pL)
        {
            randChar="abcdefghijklmnopqrstuvwxyz "[rand()%27];
            printf("%c",randChar);
            counter++;
        }
        printf("\n");
        break;
        }
      case 5:
        {
            counter=0;
            srand(time(NULL)); //Seeding function for rand()
            while(counter<pL)
        {
            randChar="ABCDEFGHIJKLMNOPQRSTUVWXYZ "[rand()%27];
            printf("%c",randChar);
            counter++;
        }
        printf("\n");
        break;
        }//end of case 5
      case 6:
        {
            printf("Thank you for using my program!!");
            getch();
            exit(0);
        }
      default:
        {
            printf("The input choice is incorrect please try again\n");
        }

        }//end of switch
        }//end of first while loop
        return 1;
    }
