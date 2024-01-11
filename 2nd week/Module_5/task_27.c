#include<stdio.h>
int main(){
   int X;
scanf("%d", &X);
int result = X/1000;
if(result %2 == 0){

    printf("EVEN\n");
}
else{

    printf("ODD");   
}

    return 0;
}