#include<stdio.h>
int main()
{

int N;
scanf("%d",&N);

if(N > 0){

for(int i = 1; i<= N; i++){

printf("%d ",i);

}

}
else{

for(int i = N; i <= 0  ; i++){

printf("%d ",i);

}


}


    return 0;
}