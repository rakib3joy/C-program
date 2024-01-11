#include<stdio.h>
int main(){

int N;
scanf("%d",&N);


    int a,even_count = 0,odd_count = 0, positive_count = 0,negative_count = 0;  
    for(int i = 1; i <= N; i ++){

         scanf("%d",&a);  
         if(a > 0){
    
           positive_count ++;


         }        
        if(a < 0){

    
            negative_count ++;


        }
        if(a %2 == 0){
    
            even_count ++;         

        }       
        if(a %2 != 0){
            
            odd_count ++;          


        }
    }
        printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even_count,odd_count,positive_count,negative_count );        


    return 0;
}