#include <stdio.h>
#include<string.h>
int main()
{

    FILE *fp;
    char str[100];
    char ch;
    int i=0,lower,upper,digit,line,others,space;
    lower=upper=digit=line=others=space=0;
    fp = fopen("text.txt", "r");
    if (fp == NULL){
        printf("File doesn't exist\n");
    }
    else{
       while(!feof(fp)){
            ch=fgetc(fp);
            if(ch<='z' && ch>='a') lower++;
            else if(ch<='Z' && ch>='A') upper++;
            else if(ch>='0' && ch<='9') digit++;
            else if(ch==10) line++;
            else if(ch==' ') space++;
            else others++;

        }
        printf("Lowercase: %d \n uppercase: %d\n digits: %d\n line: %d\n space: %d\n special character: %d\n",lower,upper,digit, line, space, others);

    }

    fclose(fp);
    return 0;
}
