#include <stdio.h>
int main(){

long long int i;
long long int sum = 0;
int n;
scanf("%d", &n);
for (i = 1; i <= n; i += 1 ){

sum += i;// sometimes it wiil not work because i(int) and sum long long int..that's why we take i as a long long int.

}
printf("summ = %d",sum);


    return 0;
}