#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
//编写代码在一个整形有序数组中查找具体的某个数

//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
    int main(){
	  int a = 0;
	  int arr[] = { 2, 3, 5, 8, 9, 23, 45 };
	  printf("请输入你要查找的元素：");
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
			  printf("找到了，下标为%d\n", m);
		  }
	  }
	  
		  if (l >= r)
			  printf("找不到\n");
		  
	 system("pause");
	  return 0;
  }
  



	