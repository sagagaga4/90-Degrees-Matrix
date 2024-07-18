#include<stdio.h>
#define N 3

int IsTurned(int arr1[N][N], int arr2[N][N])
{
	int i , j ;
	
	for( i = 0; i < N; i++)
	{
		for( j = 0; j < N; j++)
		{
			if(arr1[i][j] != arr2[j][N - 1 - i])
			{
				return 0;
			}
		}
	}
	
	return 1;
}


int main()
{
	int arr1[N][N] =
	{
		{1, 2 , 3},
		{4, 5 , 6},
		{7, 8,  9}
	};

	int arr2[N][N] =
	{
		{7, 4, 1},
		{8, 5, 2},
		{9, 6, 3}
	};

	if(IsTurned(arr1,arr2))
	{
		printf("ARR IS TURNED 90 DEGREES\n");
	}
	else
	{
		printf("NOOOOOO\n");
	}
	return 0;
}
