#include<stdio.h>
#include<cstring>

// int main()
// {
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);

// 	char st[40] = "Raihan Sikdar";
//     int i=0,len=0;

//     while(st[i]!='\0')
//     {
//     	i++;
//     	len++;
//     }

//     for(i=len-1;i>=0;i--)
//     {
//     	printf("%c",st[i] );
//     }

// }

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	char st[40] = "Raihan Sikdar";
	char tr[40];
    int i=0,len=0,j=0;

    while(st[i]!='\0')
    {
    	i++;
    	len++;
    }

    for(j=0,i=len-1;i>=0;i--,j++)
    {
    	tr[j] = st[i];
    }
    tr[j]='\0';

  printf("%s",tr);
   

}