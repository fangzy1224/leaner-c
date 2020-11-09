#include<stdio.h>
#pragma warning (disable:4996)
int main(){
	int a ;
	int b ;
	int c ;
	printf("请输入三个数：");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b){
		int p = a;
		a = b;
		b = p;
	}
	if (a < c){
		int p = a;
		a = c;
		c = p;
	}
	if (b< c){
		int p = b;
		b = c;
		c = p;
	}
	printf("顺序为：%d, %d, %d\n", a, b, c);
	

	system("pause");
	return 0;
          }