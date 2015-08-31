/*********************************
    > File Name: bubble_sort_pointer.c
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月31日 星期一 09时51分46秒
 ********************************/
#include<stdio.h>
void bubble_sort(int d[], int size)
{
	int exchange = size - 1;//假定两两交换发生再数组最后的两个位置
	while(exchange)
	{
		int i;
		//记录下发生资料交换的位置
		int bound = exchange;
		exchange = 0;//假定本次比较没有资料交换
		for(i = 0; i < bound; i++)
		{
			if(d[i] > d[i + 1])
			{
				int t = d[i];
				d[i] = d[i + 1];
				d[i + 1] = t;
				exchange = i;
			}
		}
	}
}
int main(int argc, char* const argv[])
{
	int i;
	int a[] = {3, 5, 3, 6, 4, 7, 5, 7, 4};
	bubble_sort(a, sizeof(a)/sizeof(*a));
	//输出
	for(i = 0; i < sizeof(a)/sizeof(*a); i++)
		printf("%d\t", a[i]);
	printf("\n");
	return 0;
}
