#include <stdio.h>
int main(){

    int n;

    scanf("%d", &n);
    int a[n];
   
   for (int i = 0; i < n; i++)
   {

    scanf("%d", &a[i]);
   }

  int new_arr[7] = {0};

   for(int i = 0; i < n; i++)
   {
      
      int count = a[i];
      new_arr[count]++;
   }


   for (int i = 0; i < 6; i++)
   {

    printf("%d - %d\n", i, new_arr[i]);
   }


    return 0;
}
