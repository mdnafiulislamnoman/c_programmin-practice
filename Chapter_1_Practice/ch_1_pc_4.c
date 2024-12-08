#include<stdio.h>

int main (){
    
    int p,r,t,s;
    
    printf("Enter principle(p):");
    scanf("%d",&p);
    
    printf("Enter Rate of interest (r):");
    scanf("%d",&r);
    
    printf("Enter Time period (t):");
    scanf("%d",&t);
    
    s = (p*r*t)/100;
    
    printf("Simple interest (s) is: %d",s);
}