#include<stdio.h>
int main()
{

int N;
scanf("%d",&N);


  int num_1 = N/10;
  int num_2 = N%10;

  if(num_1 > num_2){


  if( num_1 % num_2 == 0 && num_2 != 0 || num_2 % num_1 == 0 && num_1 != 0){

    printf("YES");

  }

  else{

    printf("NO");
  }


  } 

else{


 if(num_2 % num_1 == 0 && num_1 != 0 || num_1 % num_2 == 0 && num_2 != 0){

    printf("YES");
 
  }

  else{

    printf("NO");
  }


  } 



    return 0;


}



