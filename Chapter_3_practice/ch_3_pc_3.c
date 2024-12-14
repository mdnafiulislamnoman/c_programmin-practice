#include <stdio.h>

int main() {

float slab;
int tax=0;

printf("Enter income slab in lacs:");
scanf("%f",&slab);

if(slab>2.5){
if (slab>=2.5 && slab<=5.0)
{
    tax +=5;
    printf("Your tax is : %d %%", tax);
}else if (slab>=5.0 && slab<=10.0){
    tax +=20;
    printf("Your tax is : %d %%", tax);
}else if (slab>10.0){
    tax +=30;
    printf("Your tax is : %d %%", tax);
}
}else{
    printf("There is no tax below 2.5L");
}

}