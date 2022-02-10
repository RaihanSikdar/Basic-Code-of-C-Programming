#include<stdio.h>

void swaping(int *ptr1,int *ptr2)
{
	int temp;

    temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
 
}

int main()
{
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	int x =30,y=20;
	
	swaping(&x,&y);
	
	printf("X : %d\n",x);
	printf("Y : %d\n",y);

	

}