#include <stdio.h>
#include<string.h>
int main()
{

    FILE *fp;
    char str[100];
    char ch;
    int i=0,lower,upper,digit,line,others,space;
    lower=upper=digit=others=space=0;
    line=1;
    fp = fopen("text.txt", "r");
    if (fp == NULL){
        printf("File doesn't exist\n");
    }
    else{

       ch=fgetc(fp);
       while(!feof(fp)){
            if(ch<='z' && ch>='a') lower++;
            else if(ch<='Z' && ch>='A') upper++;
            else if(ch>='0' && ch<='9') digit++;
            else if(ch==32) space++;
            else if( ch== 10 ) line++;
            else others++;

            ch=fgetc(fp);
        }
        printf("Lowercase: %d \nuppercase: %d\ndigits: %d\nline: %d\nspace: %d\nspecial character: %d\n",lower,upper,digit, line, space, others);

    }

    fclose(fp);
    return 0;
}
