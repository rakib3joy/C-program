#include<stdio.h>
int main(){

char a[] = "Rakib\0";//size 7 // if did not mention size of array..this will print corretly and automatically they take '\0' this character. 
// char a[] = "Rakib";//size 6
// int sz = sizeof(a)/sizeof(char);
// printf("%d\n",sz);
// char a[5] = "Rakib\0";
// int sz = sizeof(a)/sizeof(char);
// printf("%d\n",sz);

//char a[5] = "Rakib";//but if we mention array of size like this,..they did not take \0 this character and output will not be correc. 
printf("%s",a);
//that means "" when I will give this ("") ..automatically he will give one null that means\0
    return 0;
}