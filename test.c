#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int GCD(a){

	for (int i = 1; i < a ; i++){
		int	result = a % i;
		if (result == 0){
			printf("Լ���У�%d\n", i);
		                }
	                                }
          }

int main(){

	     int x = 0;
	   printf("���������֣�\n");
		scanf("%d", &x);
		printf("Լ���У�%d\n", GCD(x));
       system("pause");
           }