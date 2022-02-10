#include<stdio.h>

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int x =10;
	int *ptr;

	ptr = &x;

	printf("%d\n",x);
	printf("%d\n",&x);
	printf("%d\n",ptr);
	printf("%d",*ptr);

}