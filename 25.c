#include <stdio.h>
#include <string.h>
int main()
{

    FILE *fp;
    fp = fopen("pattern.txt", "w");
    int i,j, n;
    printf("Enter the Row Size : ");
    scanf("%d", &n);
    if(fp==NULL)
        printf("The file is not exist");
    else{
        fprintf(fp,"Here is the Pattern  : \n\n");
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                fprintf(fp,"%d",i);
            }
            fprintf(fp,"\n");
        }
    }

    fclose(fp);
}
