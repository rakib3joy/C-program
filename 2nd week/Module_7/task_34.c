#include<stdio.h>
int main(){

int array[5];
 for(int i = 0; i < 5; i++ ){
//print("arr[%d]\n",i)
    scanf("%d\n", &array[i]);
 }
 for(int i = 0; i < 5; i++ ){

    printf("%d\n",array[i]);
 }

    return 0;
}

//ekhane, amra sudu input niye directly change kore dei nai....ekhane input niye ami seigula memory te save korechi then seigula memeory theke niye print korechi..