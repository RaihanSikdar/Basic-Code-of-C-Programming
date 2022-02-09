#include<stdio.h>

struct person
{
	int age;
	float salary;
};


int main()
{
	freopen( "input.txt","r", stdin);
	freopen( "output.txt","w", stdout);

	struct person per[3];

	for(int i=0;i<3;i++)
	{
		scanf("%d",&per[i].age);
	    scanf("%f",&per[i].salary);
	}

	for(int i=0;i<3;i++)
	{   
		printf("Informetion of Persion : %d\n",i+1);
		printf("%d\n",per[i].age);
	    printf("%f\n",per[i].salary);
	    printf("\n");
	}


    


}