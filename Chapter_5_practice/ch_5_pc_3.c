#include <stdio.h>

int main() {
    int n;
    
 printf ("Enter the line numbers:");
 scanf ("%d",&n);
 
 for (int i = 0 ; i<n ; i++){
     for(int j = 0 ; j<2*i+1 ; j++){
         printf("*");
     }
     
     printf("\n");
     
 }
}