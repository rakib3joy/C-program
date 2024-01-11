#include <stdio.h>
#include <string.h>
int main(){

    char a[100], b[100];

    scanf("%s %s", a, b);
    int result = strcmp(a, b);
    if (result == 0)
    {
        printf("same\n");
    }
    else if  (result > 0)
    {
        printf("B is smaller\n");
    }
    else{
        printf("A is smaller\n");        
    }


    return 0;
}