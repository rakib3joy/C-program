#include<stdio.h>
int main(){


//int a[5];
char a[5];

//int sz = sizeof(a)/sizeof(int);//size of array
//printf("%d\n",sz);

//printf("%d\n",sizeof(a));

int sz = sizeof(a)/sizeof(char);
printf("%d\n",sz);

//printf("%d\n",sizeof(int));//to about data type how much byte they occupied
//printf("%d",sizeof(long long int));
    return 0;
}