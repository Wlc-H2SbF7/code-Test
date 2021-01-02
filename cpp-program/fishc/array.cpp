#include<stdio.h>
#define NUM 15

#if 0
int main(void)
{
	int arry[NUM];
	int i,sum=0;
	for (i=0;i<NUM;i++)
	{
		scanf("%d",&arry[i]);
	}

	for (i=0;i<NUM;i++)
	{
		sum = sum + arry[i];
	}
	printf("The arry[%d] sum is %d\n",NUM,sum);
	return 0;
}
#endif

#if 0
//modify one
int sum_arry(int *);

int main(void)
{
	int arry[NUM];
	int i,sum=0;
	for (i=0;i<NUM;i++)
	{
		scanf("%d",&arry[i]);
	}

	sum = sum_arry(arry);
	printf("The arry[%d] sum is %d\n",NUM,sum);
	return 0;
}

int sum_arry(int *ptr)
{
	int sum=0;
	int i;
	for(i=0;i<NUM;i++)
	{
		sum = sum + *(ptr + i);
	}
	return sum;
}
#endif

#if 0
//modify two
int sum_arry(int);

int main(void)
{
	int arry[NUM];
	int i,sum=0;
	for (i=0;i<NUM;i++)
	{
		scanf("%d",&arry[i]);
	}

	sum =(int) sum_arry(&arry[]);
	printf("The arry[%d] sum is %d\n",NUM,sum);
	return 0;
}

int sum_arry(int brry[])
{
	int sum=0;
	int i;
	for(i=0;i<NUM;i++)
	{
		sum = sum + brry[i];
	}
	return sum;
}
#endif


#include <iostream>

using namespace std;

int addArray(int *array,int n);

int main()
{
	int data[] = {0,1,2,3,4,5,6,7,8,9};
	int size = sizeof(data) / sizeof(data[0]);

	cout << "结果是：" << addArray(data,size) << endl;
	return 0;
}

int addArray(int *array,int n)
{
	int sum =0;
	int i;
	for(i=0;i<n;i++)
	{
		sum += *array++;
	}
	return sum;
}
