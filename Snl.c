#include<stdio.h>
#include<stdlib.h>
int main()
{
int turn, r;
char p1[20],p2[20];
turn = 0;
char choice;
printf("Do you want to play Snakes & Ladders? press y for yes any other key to exit ");
scanf("%c", &choice);
if (choice=='y')
{
 printf("Welcome to snakes and ladders.\nThe snakes are at positions 3, 26, 34, 51, 67, 89 and 91 and the ladders are at positions 5, 22, 58, 62, 76 and 85. We will have two players.\n \n");
 printf("\nEnter name of player one:");
 scanf("%s", p1);
 printf("\nEnter name of player two:");
 scanf("%s", p2);
 printf("\nWelcome %s and %s \n", p1, p2);
}
else
 printf("wrong choice");
return 0;
}
