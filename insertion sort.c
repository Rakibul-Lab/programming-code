#include<stdio.h>
int main()
{

    int i, j,n, temp, a[30];

    printf("How many numbers u are going to enter?: ");
    scanf("%d",&n);

    printf("Enter %d elements: ", n);

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    for(i=1; i<n; i++)
    {
        temp=a[i];
        j=i-1;

        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }

    printf("Order of Sorted elements: ");
    for(i=0; i<n; i++)
        printf(" %d",a[i]);

    return 0;
}
