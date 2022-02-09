#include<stdio.h>

struct person
{
   char name[50];
   int age;
   float salary;
};

void display(struct person p)
{
     printf("%s\n",p.name);
	 printf("%d\n",p.age);
	 printf("%f\n",p.salary);
}

int main()
{
	//freopen( "input.txt","r", stdin);
	//freopen( "output.txt","w", stdout);

	struct person per,per2;

	strcpy(per.name,"Raihan Sikdar");
	per.age= 23;
	per.salary=50000.000;

	strcpy(per2.name,"Mamun");
	per2.age= 23;
	per2.salary=45000.000;

	display(per);
	display(per2);


}

