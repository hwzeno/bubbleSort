/*********************************
    > File Name: bubble_sort_randomNum2.c
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月26日 星期三 09时25分30秒
 *******************************/
#include<stdio.h>
#include<time.h>
int bubble_sort(int arr[], int n);
void write_file(int arr[], int n);

int main(int argc, char* argv)
{
	clock_t bg, ed;
	int i = 0, j = 0;
	int arr[100000] = {0};
	FILE *fd;
	fd = fopen("randomNum.txt", "r");
	while(  fscanf(fd, "%d", &i) != EOF)
	{
		arr[j] = i;
		j++;
	}
	
	printf("\n");
	bg = clock();
	bubble_sort(arr, j);//数组被改变了
	ed = clock();
	printf("cost time for:%.15f", (double)(ed-bg)/CLOCKS_PER_SEC);
	write_file(arr, j);
	return 0;
}

int bubble_sort(int arr[], int n)//冒泡算法
{
	int i, j;
for(i = 0; i < n - 1; i++)
	{
		int	flag = 0;//设置标志
		for(j = i + 1; j < n; j++)
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
			break;
	}
	return 0;
}






void write_file(int arr[], int n)
{
	
	FILE *fw;
	fw = fopen("afterSort.txt", "w");
	int k = 0;
	while(k < n)
	{
		fprintf(fw, "%d\t", arr[k]);
		k++;
		if(k%10 == 0)
			fprintf(fw, "%c", '\n');
	}
}
