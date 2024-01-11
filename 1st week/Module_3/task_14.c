#include <stdio.h>
int main(){

int i;
int sum = 0;
int n;
scanf("%d", &n);
for (i = 1; i <= n; i += 1 ){

sum += i;

}
printf("summ = %d",sum);


    return 0;
}