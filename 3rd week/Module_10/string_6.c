#include<stdio.h>
#include<string.h>
int main(){

//standard - > fgets()
//Not standard - > gets()

//using gets()
// char a[56];//size should be less than what input we put in 
// gets(a); 
// printf("%s\n",a);

   
//using fgets() 
//syntax:  fgeta(arra_name,size[char+null], stdin) 
   
char a[18];
fgets(a,18,stdin);   //this size should not be more...it could less but not more than initializing of character.
a[17] = '\0';
printf("%s\n",a);
   
    return 0;
}