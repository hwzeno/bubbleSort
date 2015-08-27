/********************************
    > File Name: product_random_number.c
    > Author: Zeno
    > Mail:340562424@qq.com 
    > Created Time: 2015年08月27日 星期四 11时32分55秒
 ********************************/
#include<stdio.h>
#include<time.h>
int main()
{
	FILE *fw;
	int i;
	srand(time(NULL));
 	fw = fopen("randomNum.txt", "w");

	for(i = 0; i < 100000; i++)
	{
		fprintf(fw, "%d\t", rand());
		if(i % 10 == 0)
			fprintf(fw, "%c", '\n');
	}
	printf("\n");
}
