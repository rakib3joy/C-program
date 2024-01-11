#include<stdio.h>
int main()
{


long long int eye, mouth, body;
scanf("%lld %lld %lld",&eye, &mouth, &body);
int  count = 0;
 
if(eye >= 1 && mouth >= 1 && body >= 1){
   count++;

} 
else if(eye >= 2 && body >= 1){

    count++;

}

else if(eye >= 2 && mouth >= 1 && body >=1 ){

   count++;

}

printf("%d\n",count);

    return 0;
}