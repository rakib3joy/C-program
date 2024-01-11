#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int array[n];
 for(int i = 0; i < n; i++ ){
    scanf("%d\n", &array[i]);
 }
 for(int i = 0; i < n; i++ ){

    printf("%d\n",array[i]);
 }


 for(int i = n-1 ; i >= 0; i-- ){
 

     if(i%2 !=0 ){
    printf("reverse:%d\n",array[i]);
 
     }
 }



    return 0;
}
