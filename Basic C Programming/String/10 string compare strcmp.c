#include<stdio.h>
#include<cstring>

int main()
{
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	char st[40] = "Raihan Sikdar";
	char tr[20] = "Raihan Sikdar";

	int d = strcmp(st,tr);

	if(d==0)
	{
      puts("Equal");
	}
	else
	{
		puts("Not Equal");
	}

}