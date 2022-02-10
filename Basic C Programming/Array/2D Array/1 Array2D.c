#include<stdio.h>
int main()
{
	// freopen( "input.txt","r", stdin);
	// freopen( "output.txt","w", stdout);

	int arr[3][4]; 
	//int arr[3][4]={{1,2,3,4},{5,6,7,8,},{9,10,11,12}};

	for(int i=0;i<3;i++)
	{
		for(int j =0;j<4;j++)
		{
			scanf("%d ",&arr[i][j]);

		}
	}



	for(int i=0;i<3;i++)
	{
		for(int j =0;j<4;j++)
		{
			printf("%d ",arr[i][j]);

		}
		printf("\n");
	}
}