#include<stdio.h>
#include<cstring>


int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	char st[10]="Raihan";
    char tr[10]="Mamun";
    char temp[10];

    strcpy(temp,st);

    strcpy(st,tr);
    strcpy(tr,temp);

    printf("%s\n",st);
    printf("%s",tr);
 

   
	return 0;
}