#include<stdio.h>
int main()
{
	// freopen( "input.txt","r", stdin);
	// freopen( "output.txt","w", stdout);

	int arr[5],n,max,min,i;
	scanf("%d",&n);
    
    //user input
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
    }

    //print user input
    for(int i=0;i<n;i++)
    {
    	printf("%d ",arr[i]);
    }
    printf("\n");

     max=arr[0];
     min=arr[0];
    

	for(int i =0;i<n;i++)
	{
		if(max<arr[i])
			max=arr[i];
			
		if(min>arr[i])
			min=arr[i];

		
	}
	
	printf("Max: %d\n",max);
	printf("Min: %d\n",min);
}