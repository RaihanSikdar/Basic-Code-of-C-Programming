#include<stdio.h>
#include<cstring>


int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	char st[10]="madam";
    char tr[10];

    strcpy(tr,st);

    //printf("%s",tr);

    strrev(st);
    //printf("%s",st);


   int d =  strcmp(st,tr);

   if(d==0)
   	 printf("%s is Palindrom",tr);
   	else
   	   printf("%s is not Palindrom",tr);
 

   
	return 0;
}