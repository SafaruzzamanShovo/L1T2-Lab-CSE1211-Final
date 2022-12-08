
#include<stdio.h>
int main(){

    FILE *fp;
    fp = fopen("pattern.txt", "w");
    int i,j, n;
    printf("Enter the Height : ");
    scanf("%d", &n);
    if(fp==NULL)
        printf("The file is not exist");
    else{
        for( i=1;i<=n;i++){
            for( j=1;j<=i;j++){
                if(i%2){
                    if(j%2){
                        fprintf(fp,"AA");
                    }
                    else  fprintf(fp,"BB");
                }
                else{
                    if(j%2){
                        fprintf(fp,"BB");
                    }
                    else fprintf(fp,"AA");
                }
            }
            fprintf(fp,"\n");
        }
    }
    fclose(fp);
    return 0;

}
