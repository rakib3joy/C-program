#include<stdio.h>
int main(){


char a[5];//char[5] = {'R','A','K','I','B'};
for(int i = 0; i<5; i++){

    scanf("%c",&a[i]);//space is also character.
}
for(int j = 0; j < 5; j++){

printf("%c\n",a[j]);

}

    return 0;
}