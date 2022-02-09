#include<stdio.h>

//Global structure
struct person
{
	int age;
	float salary;
};

//struct person per1,per2; //Global Variable

int main()
{
	freopen( "input.txt","r", stdin);
	freopen( "output.txt","w", stdout);

	struct person per1={20,55000.00};
	struct person per2,per3;

	printf("Person_1:\n");
	printf("Age : %d\n",per1.age);
	printf("Salary : %f\n",per1.salary);

	printf("\n");


	scanf("%d",&per2.age);
	scanf("%f",&per2.salary);
    
    printf("Person_1:\n");
	printf("Age : %d\n",per2.age);
	printf("Salary : %f\n",per2.salary);

	printf("\n");

	per3 = per2;
    
    printf("Person_2:\n");
	printf("Age : %d\n",per3.age);
	printf("Salary : %f\n",per3.salary);

}