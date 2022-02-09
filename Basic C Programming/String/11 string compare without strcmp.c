#include<stdio.h>
#include<cstring>

int compare(char st[],char tr[])
{
	int i=0,flag=0;

	while(st[i]!='\0' && tr[i]!='\0')
	{
		if(st[i]!=tr[i])
		{
			flag =1;
			break;
		}
		i++;
	}

	if(flag==0)
		return 0;
	else
		return 1;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	char st[40] = "Raihan Sikdar";
	char tr[20] = "Raihana Sikdar";

	int d= compare(st,tr);

	if(d==0)
	{
      puts("Equal");
	}
	else
	{
		puts("Not Equal");
	}
   return 0;
}