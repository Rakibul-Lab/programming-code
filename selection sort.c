#include<stdio.h>

int main(void)
{

    int n, temp,min, i, j, a[30];

    printf("How many numbers are u going to enter?: ");
    scanf("%d",&n);

    printf("Enter %d numbers: ",n);
     for(i=0; i<n; i++)
        scanf("%d",&a[i]);

        for(i=0;i<n;i++)
        {
            min=i;
            for(j=i+1;j<n;j++)
            {
                if(a[min]>a[j])
                {
                    min=j;
                }
            }
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }

    printf("Sorted elements: ");
    for(i=0; i<n; i++)
        printf(" %d",a[i]);

    return 0;

}
