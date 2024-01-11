#include<stdio.h>
int main(){
 char X;
scanf("%c", &X);
if(X>='0' && X <= '9' ){

    printf("IS DIGIT\n");
}
else{
    if(X >= 'A' && X <= 'Z' ){

    printf("ALPHA\nIS CAPITAL");  

    } 
    else{

    printf("ALPHA\nIS SMALL");  

    }
}

    return 0;
}