#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int getRandomNumber()
{
int num;
srand(time(NULL));
num=rand();
num=(num%6)+1;
return num;
}
int snake(int val)
{
 if(val==26)
 {
  printf("\nEaten by a snake");
  val=val-10;
 }
 else if(val==34) 
 {
  printf("\nEaten by a snake");
  val=val-14;
 }
 else if(val==51)
 {
  printf("\nEaten by a snake");
  val=val-11;
 }
 else if(val==73)
 {
  printf("\nEaten by a snake");
  val=val-19;
 }
 else if(val==94)
 {
  printf("\nEaten by a snake");
  val=val-18;
 }
 return val;
}
int ladder(int val)
{
 if(val==5) 
 {
  printf("\nClimbed a ladder");
  val=val+20;
 }
 else if(val==22)
 {
  printf("\nClimbed a ladder");
  val=val+15;
 } 
 else if(val==39)
 {
  printf("\nClimbed a ladder");
  val=val+12;
 } 
 else if(val==65)
 {
  printf("\nClimbed a ladder");
  val=val+13;
 } 
 else if(val==82)
 {
  printf("\nClimbed a ladder");
  val=val+8;
 } 
 return val;
}
void winner(char pl[20])
{
 printf("\n\nThe winner is %s.\nCongrats", pl);
}
int whoseturn(char player[20], int plsc)
{
 int dval;
 char n;
 printf("\n%s chance", player); 
 printf("\nPress Enter/Return to roll the dice or CTRL+C to exit");
 scanf("%c", &n);
 if(n==10)
 {
  dval=getRandomNumber();
  printf("Your dice value is: %d", dval);
   if(plsc+dval>100)
   {
    printf("\noverflow invalid chance\n");
   }
   else if(plsc+dval==100)
   {
    winner(player);
    plsc+=dval;
   }
   else
   {
    plsc+=dval;
    plsc=snake(plsc);
    plsc=ladder(plsc);
    printf("\n%s is now in %d position\n\n",player, plsc);
   }
 } 
 return plsc;
}
int main()
{
int r,dval, ps1, ps2;
char p1[20],p2[20];
dval=0;
ps1=0;
ps2=0;
char dice;
char choice;
printf("Do you want to play Snakes & Ladders?");
scanf("%c", &choice);
 if (choice=='y')
 { 
  printf("Welcome to snakes and ladders.\nThe snakes are at positions 26, 34, 51, 73, and 94 \nThe ladders are at positions 5, 22, 39, 65 and 82. \nWe will have two players.\n \n");
  printf("\nEnter name of player one:");
  scanf("%s", p1);
  printf("\nEnter name of player two:");
  scanf("%s", p2);
  printf("\nWelcome %s and %s \n", p1, p2);
  ps1=whoseturn(p1,ps1);
  while((ps1<100)&&(ps2<100))
  { 
   ps2=whoseturn(p2,ps2);
   ps1=whoseturn(p1,ps1);
  }
 }
 else
  printf("Okay, thank you");
return 0;
}
