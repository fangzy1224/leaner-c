#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int GCD(a){

	for (int i = 1; i < a ; i++){
		int	result = a % i;
		if (result == 0){
			printf("约数有：%d\n", i);
		                }
	                                }
          }

int main(){

	     int x = 0;
	   printf("请输入数字：\n");
		scanf("%d", &x);
		printf("约数有：%d\n", GCD(x));
       system("pause");
           }