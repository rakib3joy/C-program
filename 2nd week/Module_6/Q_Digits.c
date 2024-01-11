#include<stdio.h>
int main(){


    
     int test;
   scanf("%d",&test);   
    for(int t = 1; t <= test; t ++){

            int N;
            scanf("%d",&N);
            do{
            printf("%d ",N%10);
            N = N/10;

}
while(N != 0); 
printf("\n"); 

    }
    


    return 0;
}