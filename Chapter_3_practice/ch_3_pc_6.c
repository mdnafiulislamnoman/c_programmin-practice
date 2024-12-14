#include<stdio.h>

int main (){

    int first,second,third,fourth;

printf("Enter your first number:");
scanf("%d",&first);
printf("Enter your second number:");
scanf("%d",&second);
printf("Enter your third number:");
scanf("%d",&third);
printf("Enter your fourth number:");
scanf("%d",&fourth);

if (first>second && first>third && first>third)
{
    printf("The largest nimber is: %d",first);
}else if (second>first && second>third && second>fourth)
{
    printf("The largest number is: %d",second);
}else if (third>first && third>second && third>fourth)
{
    printf("The largest number is: %d",third);
}else if (fourth>first && fourth>second && fourth>third)
{
    printf("The largest number is: %d", fourth);
}

}