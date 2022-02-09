#include<stdio.h>
#include<cstring>

int main()
{
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	char st[100];
	int i=0;
	
	gets(st);
    
    while(st[i]!='\0')
    {
          printf("%c\n",st[i]);
          i++;
    }

}