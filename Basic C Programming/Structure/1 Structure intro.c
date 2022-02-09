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

    // //Local structure
    // struct person
    // {
	   // int age;
	   // float salary;
    // };

	struct person per1,per2; // Local variable

	per1.age = 23;
	per1.salary = 50000.00;

    printf("Person_1:\n");
	printf("Age : %d\n",per1.age);
	printf("Salary : %f\n",per1.salary);

	printf("\n");

	per2.age = 24;
	per2.salary = 45000.00;

    printf("Person_2:\n");
	printf("Age : %d\n",per2.age);
	printf("Salary : %f\n",per2.salary);


}
