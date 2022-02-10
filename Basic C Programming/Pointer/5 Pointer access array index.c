#include<stdio.h>

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int arr[]={5,7,3,8,9};
	int *ptr;	

	ptr = &arr[0];

	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		printf("%d\n",*ptr);
		ptr++;
	}

}