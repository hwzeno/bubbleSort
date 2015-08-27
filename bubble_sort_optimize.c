/*********************************
    > File Name: bubble_sort_optimize.c
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月26日 星期三 09时25分30秒
 *******************************/
#include<stdio.h>
#define N 5//全局定义数组的长度
int bubble_sort(int arr[], int n);
int print_arr(int arr[], int n);

int main(int argc, char* argv)
{
	int array[N] = {0};//初始化
	int i;
	for(i = 0; i < N; i++)//循环赋值
	{
		scanf("%d", &array[i]);//注意不要少了&	
	}
	print_arr(array, N);//打印初始数组
	bubble_sort(array, N);//排序
	return 0;
}



int bubble_sort(int arr[], int n)//冒泡算法
{
	int i, j;
for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)//注意每次进入内层for循环时都会对j进行一次初始化，不要写成j=1;
		{
			if (arr[i] > arr[j])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
			else
				continue;
		}
	}
	print_arr(arr,n );
	return 0;
}


int print_arr(int arr[], int n)//打印数组
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;	
	
}
