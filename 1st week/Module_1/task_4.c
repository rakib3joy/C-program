#include <stdio.h>

int main()
{
   int number_1, number_2;
   float f;  
   char c;

   
   scanf("%d %d %f %c", &number_1, &number_2, &f, &c);
   printf("%d %d %.2f %c", number_1, number_2, f, c);

    return 0;
}
