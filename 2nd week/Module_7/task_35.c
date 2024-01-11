#include<stdio.h>
int main(){

//array initializing
//when we intializing an arry it is not mandatory that you have to declare size of an array.
int array[100] = {10, 20, 30, 40, 50}; 
//int array[5] = {10};or {0};

 for(int i = 0; i < 5; i++ ){

    printf("%d\n",array[i]);
 }

    return 0;
}

