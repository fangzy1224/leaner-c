#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
//��д������һ���������������в��Ҿ����ĳ����

//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
    int main(){
	  int a = 0;
	  int arr[] = { 2, 3, 5, 8, 9, 23, 45 };
	  printf("��������Ҫ���ҵ�Ԫ�أ�");
	  scanf("%d", &a);
	  
	  int l = 0;
	  int r = sizeof(arr) / sizeof(arr[0]) - 1;
	
	  while (l < r){
		  int m = l +( r-l) / 2;
		  if (a < arr[m]){
			  r = m - 1;
                    }
		  else if (a > arr[m])
		  {
			  l = m + 1;
		  }
		  else{
			  printf("�ҵ��ˣ��±�Ϊ%d\n", m);
		  }
	  }
	  
		  if (l >= r)
			  printf("�Ҳ���\n");
		  
	 system("pause");
	  return 0;
  }
  



	