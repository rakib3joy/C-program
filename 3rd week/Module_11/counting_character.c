#include <stdio.h>
#include <string.h>
int main(){

    char s[100];

    scanf("%s", s);
    int new_arr[26] = {0};
   
   for (int i = 0; i < strlen(s); i++)
   {

    int count = s[i] - 'a';
    new_arr[count]++;

     
   }


   for (int i = 0; i < 26; i++)
   {
    if (new_arr[i]!= 0)
    {
        printf("%c - %d\n", i+'a', new_arr[i]);
    }

   }

printf("#######################################\n");

   for (int i = 0; i < strlen(s); i++)
   {
     
     int value = s[i]-'a';
     printf("%c - %d\n", value+'a', new_arr[value]);
    
   }

printf("#######################################\n");

   for (int i = 0; i < strlen(s); i++)
   {
     
     int value = s[i]-'a';

    if (new_arr[value]!= 0)
    {

     printf("%c - %d\n", value+'a', new_arr[value]);
    }
     new_arr[value] = 0;
    
   }



    return 0;
}
