#include <stdio.h>

int main(){

    float a = 9, b = 12, c = 7, d = -7;

    printf("a=%f,b=%f,c=%f,d=%f \n", a, b, c, d);
    printf("(a/c+b/c)=%f, (a+b)/c=%f, d/c=%f \n",
           (a / c + b / c), (a + b) / c, d / c);

}

