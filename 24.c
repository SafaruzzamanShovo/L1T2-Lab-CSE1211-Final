#include <stdio.h>
#include <string.h>
int main()
{

    FILE *fp;
    fp = fopen("sort.txt", "w");
    int i,j, n,temp, a[100];
    printf("Enter the Array Size : ");
    scanf("%d", &n);
    if(fp==NULL)
    printf("The file is not exist");
    else{
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    fprintf(fp,"Array Elements in Sorted Order : ");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        fprintf(fp,"%d ",a[i]);

    }
    }
}
