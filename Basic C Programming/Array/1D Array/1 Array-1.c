#include<stdio.h>
int main()
{
	//freopen( "input.txt","r", stdin);
	//freopen( "output.txt","w", stdout);

	int arr[5],c=0;

	arr[0]=15;
	arr[1]=20;
	arr[2]=5;

	int sum = arr[0]+arr[1]+arr[2];

	printf("%d\n",arr[2]);
	printf("sum = %d\n",sum);

	for(int i =0;i<3;i++)
	{
		c = c+arr[i];
	}
	printf("sum of array = %d\n",c);
	printf("Avg of array = %.2f\n",(float)c/3);
}