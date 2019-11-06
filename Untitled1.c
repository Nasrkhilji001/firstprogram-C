#include <stdio.h>
int main(void)
{
float number;float answer;
int choice;
printf("1.kilogram to grams\t");
printf("2.grams to kilograms\t");
printf("Enter a number\t");
scanf("%f", & number);
printf("Enter choice\t");
scanf("%d", & choice);
if(choice==1)
{
answer=1000*number;
}
else if (choice==2)
{
answer=number/1000;
}
printf("The result is %f",answer);
}
