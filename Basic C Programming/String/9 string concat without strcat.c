#include<stdio.h>
#include<cstring>

int main()
{
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	char st[40] = "Raihan Sikdar";
	char tr[20] = " AL Mamaun";

	int i=0,j=0,len=0;

	while(st[i]!='\0')
	{
		i++;
		len++;
	}

	while(tr[j]!='\0')
	{
		st[len +j] = tr[j];
		j++;
	}

	st[len+j]='\0';

	printf("%s",st);

}