#include <studio.h>
#pragma warning(disable:4996)

int a,b,c;
int product(int x, int y);
void main(){
    printf("Enter a number between 1 and 100 : ");
    scanf("%d", &a);
    printf("Enter another number between 1 and 100 : ");
    scanf("%d", &b);
    c= product(a, b)
    printf("%d * %d = %d \n", a, b, c)
}
int product(int x, int y){
    return (x * y);
}