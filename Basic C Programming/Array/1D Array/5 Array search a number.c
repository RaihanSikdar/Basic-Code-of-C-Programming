#include<stdio.h>
int main()
{
	// freopen( "input.txt","r", stdin);
	// freopen( "output.txt","w", stdout);

	int arr[15],n,sh,pos=-1,i;

	scanf("%d",&n);
    
    for(i=0;i<n;i++)
	{
        scanf("%d ",&arr[i]);
    }

    //Searching number
    scanf("%d",&sh);

    for(i=0;i<n;i++)
	{
        if(sh==arr[i]){
        	pos=i+1;
        	break;
        }
    }

    if(pos!=-1)
    {
    	 printf("%d in array and pos : %d",sh,pos);
    }
    else
    	printf("Not found in array");

 
}

