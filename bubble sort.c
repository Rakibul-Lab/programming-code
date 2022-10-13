#include<stdio.h>

int main(void)
{

    int n, temp, i, j, a[30];

    printf("How many numbers are u going to enter?: ");
    scanf("%d",&n);

    printf("Enter %d numbers: ",n);

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    printf("Sorted elements: ");
    for(i=0; i<n; i++)
        printf(" %d",a[i]);

    return 0;
}
