/*********************************
    > File Name: bubble_sort.c
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月26日 星期三 09时25分30秒
 *******************************/
#include<stdio.h>
int bubble_sort(int arr[], int n);
int main(int argc, char* argv)
{
	int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	bubble_sort(array, 9);
	return 0;
}
int bubble_sort(int arr[], int n)
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
		//	else
		//		continue;
		}
	}
	for(i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;
}

