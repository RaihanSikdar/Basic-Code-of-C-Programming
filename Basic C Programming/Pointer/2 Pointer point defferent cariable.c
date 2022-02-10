#include<stdio.h>

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	int x =10,y=20,z=30;
	int *ptr;

	ptr = &x;
	printf("%d\n",x);

	ptr = &y;
	printf("%d\n",y);

	ptr = &z;
	printf("%d\n",z);
	

}