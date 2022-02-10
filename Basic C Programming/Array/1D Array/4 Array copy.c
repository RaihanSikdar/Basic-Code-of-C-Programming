#include<stdio.h>
int main()
{
	// freopen( "input.txt","r", stdin);
	// freopen( "output.txt","w", stdout);

	int arr1[15],n,arr2[15],i;

	scanf("%d",&n);
    
    for(i=0;i<n;i++)
	{
        scanf("%d ",&arr1[i]);
    }

    
    printf("Array 1:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }

    printf("\n");

    //copy
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }

    printf("Array 2:");

    for(i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }



    

 
}

