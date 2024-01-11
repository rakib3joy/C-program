#include<stdio.h>
int main(){

//x++ ->first assign then increment. (post increment)
//++x ->first assign then increment. (pre increment)
//post increment ->
//i = 10, x = i++, first i er value assign hobe x er moddhe then i er value 1 barbe. here, x = 10 and i = 11.

int i = 10;
//i++;
//++i;
//int x = i++; //here,x = 10, and i = 11  
int x = ++i; // here x = 11 and i =11
// that means i er value always same ..always 1 barbe..

//int x = i--; // here x = 10, and i = 9
//int x = --i; //here x = 9, and i = 9
printf("x: %d\ni: %d",x,i);

    return 0; 
}