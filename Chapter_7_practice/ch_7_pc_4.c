#include <stdio.h>
    
    int count (int a [], int n){
        int num_of_pos_int = 0;
        for (int i = 0; i<n; i++){
            if (a[i]>0){
                num_of_pos_int ++;
            }
        }
        return num_of_pos_int;
    }
    
    int main (){
        int a [] = { 1,-2,3,4,-5,6,-7,8,9,10};
        printf("The number of positive integer ins this array is %d",count(a,10));
        return 0;
    }