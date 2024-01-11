#include<stdio.h>
int main(){
char X;
scanf("%c", &X);
if(X >= 'a' && X <= 'z' ){
    int convert = X - 32;
    printf("%c",convert);
}
else{
   
   int convert = X + 32;
    printf("%c",convert);   
}

    return 0;
}