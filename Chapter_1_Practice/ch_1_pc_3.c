#include<stdio.h>

int main (){

int celcius,farenheit;

printf("Enter temparature in  celcius:");
scanf("%d",&celcius);

farenheit = celcius * 1.8 + 32;

printf("The converted temparature in farenheit is: %d",farenheit);
}