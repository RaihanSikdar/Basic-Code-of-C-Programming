#include<stdio.h>
#include<cstring>

int main()
{
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	char st[20] = "Raihan Sikdar";
	char tr[20] = " AL Mamaun";

	strcat(st,tr);
    //strcat(st," AL Mamaun");

	printf("%s",st);

}