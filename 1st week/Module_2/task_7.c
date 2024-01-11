#include <stdio.h>
int main()
{

  int a = 3, b = 20;
  int sum = a + b;// a - b = -10, b - a = 10
  printf("sum: %d\n",sum);

  int multiple = a*b;
  printf("multiple: %d\n", multiple);

  int divide = b/a;
  printf("divide: %d\n", divide); // int / int = int  -> 5/2 = 2 (int) If we want to get a float number. we need to put a float number on any of them.
   
  float new_divide = b*1.0/a; 
  printf("New_divide: %d\n");

  int mod = b%a;
  printf("Mod: %d\n",mod);

  int dif_mod = a%b;
  printf("dif_Mod: %d",dif_mod); //If we divide by big number the reminder will be that small number always. for example:  3%20 = 3

  




    return 0;
}
