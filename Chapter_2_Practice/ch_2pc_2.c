#include <stdio.h>

int main (){
    
    int number;
    
printf ("Enter students number :");
scanf ("%d",&number);

if (number > 90) {
    printf("A");
} else if (number >=80 && number<=90){
    printf("B");
} else if (number >=70 && number<=80){
    printf("C");
} else if (number >=60 && number<=70){
    printf("D");
} else if (number >=50 && number<=60){
    printf("E");
}  else if (50>number){
    printf("F");
} else {
    ("Enter a valid number:");
}
}