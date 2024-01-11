//Another solution
#include<stdio.h>
int main(){

int N;
scanf("%d",&N);

if(N == 1){ 

    printf("-1\n");// bevause if input is 1 then only possible that we did not get any output.
}
else{

    for(int i = 2; i <= N; i +=2){

        printf("%d\n",i);
    }
}
    return 0;
}