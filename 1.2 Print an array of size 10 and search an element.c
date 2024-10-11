#include<stdio.h>

void main()
{
    int arr[10],x,i;
    int ans=0;

    printf("Enter 10 elements for array:");
    for (i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n The array elements are:");
    for (i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    printf("Enter the element to search from the array:");
    scanf("%d",&x);

    for(i=0;i<10;i++)
    {
        if(arr[i]==x)
        {
            ans=1;
            break;
        }
    }
    if(ans=1)
    {
        printf("\n Value found at position %d", i+1);
    }
    else{
        printf("\n Value not found.");
    }
}
