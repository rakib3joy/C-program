#include <stdio.h>
#include <string.h>
int main(){

    char a[200], b[100];

    scanf("%s %s", a, b);
   
   int k = strlen(a);
   for (int i = 0; i <= strlen(b)-3; i++)
   {
    a[k] = b[i];
    k++;
   }
   a[k] = '\0';
   printf("%s %s", a, b);
    return 0;
}
