#include <stdio.h>
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 


int main(){
	int a = 10;
	printf("����λ��");
	while (a){
		for (int i = 1; i < a; i++){
			printf("%d ", (a % 2) & 1);
			a = a >> 2;
		}
		
	}
	
	system("pause");
	return 0;

}











/*int main(){
	int n = 10;
	int count = 0;
	while (n){
		if (n & 1 == 1){
			count++;
		}
		n = n >> 1;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}*/










/*//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
int sn(int n){
	int sum = 0;
	int tmp = 0;
	for (int i = 1; i <=5; i++){
		tmp = tmp * 10 + n;
		sum += tmp;
	}
	return sum;
}
int main(){

	printf("%d\n", sn(5));
    system("pause");
	return 0;
}
//дһ����������������һ���ַ��������ݡ�
void reverse(char *str,int n){
	char*left = str;
	char* right = str + n - 1;
	char tmp = 0;
	while (*left < *right){
		tmp = *left;
		*left = *right;
		*right = tmp;
		++*left;
		--*right;
	}

}

int main(){

	char str[] = "study";
	int size = strlen(str);
	reverse(str, size);
	printf("%s ", str);
	system("pause");
	return 0;

}*/
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
/*int print(int *arr,int n){

	for (int i = 0; i < n; i++){
		printf("%d ", *arr + i);
	}
}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	print(arr, 7);
	system("pause");
}*/

