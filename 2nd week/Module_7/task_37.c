#include<stdio.h>
int main(){

int n,sum = 0;
scanf("%d",&n);
int array[n];
 for(int i = 0; i < n; i++ ){
    scanf("%d\n", &array[i]);
    sum += array[i];
    
 }
 printf("%d",sum);


    return 0;
}
