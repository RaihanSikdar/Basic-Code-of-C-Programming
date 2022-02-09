#include<stdio.h>

int main()
{
     //char st[10]={'R','a','i','y','a','n','\0'};
     char st[6];

     //freopen( "input.txt","r", stdin);
	//freopen( "output.txt","w", stdout);

     st[0]='R';
     st[1]='a';
     st[2]='i';
     st[3]='y';
     st[4]='a';
     st[5]='n';
     st[6]='\0';

    printf("%s",st);
}