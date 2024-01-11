#include<stdio.h>
int main(){

int n, sum = 0, sub = 0;
scanf("%d",&n);
int array[n];
 for(int i = 0; i < n; i++ ){
    scanf("%d\n", &array[i]);
 }

for(int j = 0; j < n; j++){


    if(array[j] >0){

         sum = sum + array[j];

    }

    else{

         sub = sub + array[j];
    }


}

printf("%d %d",sum,sub); 
    return 0;
}
