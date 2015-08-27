/*********************************
    > File Name: bubble_sort_randomNum.c
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月26日 星期三 09时25分30秒
 *******************************/
#include<stdio.h>
int bubble_sort(int arr[], int n);
int print_arr(int arr[], int n);

int main(int argc, char* argv)
{
	int i = 0, j = 0;
	int arr[1024] = {0};
	FILE *fd;
	fd = fopen("randomNum.txt", "r");
	while(  fscanf(fd, "%d", &i) != EOF)
	
	{
		arr[j] = i;//挨个将文件中的数字存放到数组中
		j++;//统计文件中数字的个数
	}
	//printf("%d ", j);
	print_arr(arr, j);
	printf("\n");
	bubble_sort(arr, j);
	return 0;
}

int bubble_sort(int arr[], int n)//冒泡算法
{
	int i, j;
for(i = 0; i < n - 1; i++)
	{
		int	flag = 0;//设置标志
		for(j = i + 1; j < n; j++)//注意每次进入内层for循环时都会对j进行一次初始化，不要写成j=1;
		{
			if (arr[i] > arr[j])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
				flag = 1;
			}
			else
				continue;
		}
		if(flag == 0)//不要写成 =
			break;//若flag没变，说明数组有序，无需再排，直接break输出
	}
	//print_arr(arr,n );


	//写入文件
	FILE *fw;
	fw = fopen("afterSort.txt", "w");
	int k = 0;
	while(k < n)
	{
		fprintf(fw, "%d\t", arr[k]);
		k++;
	}
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
	return 0;//注意 int 要有返回值
	
	
}
