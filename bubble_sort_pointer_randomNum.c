/*********************************
    > File Name: bubble_sort_pointer_randomNum.c
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月31日 星期一 10时31分30秒
 ********************************/
#include<stdio.h>
#include<time.h>
void bubble_sort(int bs[], int size);
int main()
{
	int i = 0, j = 0;
	int arr[100000] = {0};
	FILE *fr;//不要忘了*号
	fr = fopen("randomNum.txt", "r");
	for(; i < 100000; i++)
	{
		fscanf(fr, "%d", &arr[i]);
	}
//	while(fscanf(fr, "%d", &i) != EOF)
//	{
//		arr[j] = i;
//		j ++;
//	}
	

	clock_t bg, ed;
	bg = clock();
	bubble_sort(arr, sizeof(arr)/sizeof(*arr));
	ed = clock();
	printf("time cost for: %.15f\n", (double)(ed - bg)/CLOCKS_PER_SEC);

	FILE *fw;
	fw = fopen("afterSort.txt", "w");
	for(; j < 100000; j++)
	{
		fprintf(fw, "%d\t", arr[j]);
		if((j + 1)%10 == 0)
			fprintf(fw, "%c", '\n');
			
	}
	
	return 0;
}
void  bubble_sort(int bs[], int size)
{
	int i;
	int exchange = size - 1;
	while(exchange)
	{
		int bound = exchange;
		exchange = 0;
		for(i = 0; i < bound; i++)
		{
			if(bs[i] > bs[i + 1])
			{
				int t = bs[i];
				bs[i] = bs[i + 1];
				bs[i + 1] = t;
				exchange = i;
			}
		}
	}
}
