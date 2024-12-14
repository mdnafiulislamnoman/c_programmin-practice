#include <stdio.h>

int main () {
    int first,second,third,total;

    printf("Enter mark of the first subject:");
    scanf("%d",&first);
    printf("Enter mark of the second subject:");
    scanf("%d",&second);
    printf("Enter mark of the third subject:");
    scanf("%d",&third);

    total = first+second+third;

    if (total>=60){
        if (first>33)
        {
            printf("Passed in first subject \n");
        }else if (second>33)
        {
            printf("Passed in second subject \n");
        }else if (third>33)
        {
            printf("Passed in third subject \n");
        } else{
            ("Failed");
        }
    }else{
        printf("Failed");
    }
        
        return 0;
        
    }