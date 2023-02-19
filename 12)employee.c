#include <stdio.h>
#include <stdlib.h>

int main(){
    int h,m,pay;
    printf("enter salary specified per hour : ");
    scanf("%d",&h);
    printf("enter hours you worked in the last month : ");
    scanf("%d",&m);
    pay=h*m;
    printf("your monthly pay is %d",pay);
    return 0;
}