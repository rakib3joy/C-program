#include<stdio.h>
int main()
{
//end of file [EOF]
int X;
while(scanf("%d",&X) != EOF){//if inpout 2 values then just write one more %d. that's it

  if(X == 1999){

    printf("Correct\n");
      break;
  }
  else{

    printf("Wrong\n");
  }
} 



    return 0;
}