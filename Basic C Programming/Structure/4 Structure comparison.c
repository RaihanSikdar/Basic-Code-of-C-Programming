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

	scanf("%d",&per2.age);
	scanf("%f",&per2.salary);
    
    if(per1.age==per2.age && per1.salary==per2.salary)
    	printf("Equal");
    else
    	printf("Not Equal");


}