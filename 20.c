#include<stdio.h>

void swap(int x, int y){
    int tmp=x;
    x=y;
    y=tmp;
    printf("After swaping X = %d and Y = %d",x,y);

}
int main()
{
    int x,y;
    printf("Enter the Value of X and Y : ");
    scanf("%d%d",&x,&y);
    printf("Before swaping X = %d and Y = %d\n",x,y);
    swap(x,y);
    return 0;
}
