#include<stdio.h>

int main()
{
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	int x =10,y=20;
	int *ptr1,*ptr2;

	ptr1 = &x;
	ptr2 = &y;

	int sum = *ptr1 + *ptr2;

	printf("%d\n",sum);

	

}