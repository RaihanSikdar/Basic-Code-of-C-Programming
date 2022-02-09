#include<stdio.h>
#include<cstring>


int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	char st[10]="RaiHan";
    char tr[10]="MaMuN";
    
    strupr(st);
    strlwr(tr);
    

    printf("%s\n",st);
    printf("%s",tr);
 

   
	return 0;
}