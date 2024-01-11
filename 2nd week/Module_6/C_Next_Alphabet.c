#include<stdio.h>
int main()
{

char n;
scanf("%c",&n);


if( n >= 'A' && n <= 'Z' ){

   n = n + 32;

    if(n == 'z'){
        n = n - 25;
    printf("%c",n);
}

     else{

     n = n + 1;
    printf("%c",n);

     }

}

else{

    if(n == 'z'){
        n = n - 25;
    printf("%c",n);
}
  else{
    n = n + 1;
    printf("%c",n);

  }
}


    return 0;
}