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

	struct person per1,per2;

	scanf("%d",&per1.age);
	scanf("%f",&per1.salary);
    
    printf("Person_1:\n");
	printf("Age : %d\n",per1.age);
	printf("Salary : %f\n",per1.salary);

	printf("\n");

	scanf("%d",&per2.age);
	scanf("%f",&per2.salary);
    
    printf("Person_2:\n");
	printf("Age : %d\n",per2.age);
	printf("Salary : %f\n",per2.salary);


}