// exam2-3.h 파일
#include <studio.h>
#define ADD(x, y) ((x)+(y))
#define SUB(x, y) ((x)-(y))

// exam2-3.c 파일
#include "exam2-3.h"
void main(){
    int add_result, sub result;
    printf("10과 5를 더하면 %d이다. \n", ADD(10,5));
    printf("10과 5를 빼면 %d이다. \n", SUB(10,5));
}