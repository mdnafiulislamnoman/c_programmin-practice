#include<stdio.h>

int main (){
    char character;

    printf("Enter the character:");
    scanf("%c",&character);

    if (character>='a' && character<='z')
    {
        printf("This is a lower case character");
    }else{
        printf("Its not a lower case character");
    }
    
}