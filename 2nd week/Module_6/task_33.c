#include<stdio.h>
#include<limits.h>
int main()
{

int N;
scanf("%d",&N);


    int a,max = INT_MIN, min = INT_MAX;  
    for(int i = 1; i <= N; i ++){

         scanf("%d",&a);  
         if(a > max ){
            max = a;
         }
         if( a < min){

           min = a; 
         }

    }
        printf("%d\n",max );        


    return 0;
}