#include<stdio.h>
#include<cstring>

int compare(char st[],char tr[])
{
     int i=0,flag=0;
    while(st[i]!='\0' && tr[i]!='\0')
   {
       if(st[i]!=tr[i])
       {
         flag=1;
         break;
       }
       i++;
   }

   if (flag ==0)
       return 0;
   else
    return 1;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);

	char st[10]="madam";
    char tr[10];

    int i=0,j=0,len=0,flag = 0;
    
    while(st[i]!='\0')
    {
        i++;
        len++;
    }

    //printf("%d",len);

    //reverse
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        tr[j] = st[i];
    }
    tr[j]='\0';
    
    //printf("%s",tr);

   int d = compare(st,tr);

   if(d==0)
   	 printf("%s is Palindrom",st);
   	else
   	   printf("%s is not Palindrom",st);
 

   
	return 0;
}