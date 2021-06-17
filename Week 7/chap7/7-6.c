#include <stdio.h>
void f(int);

int main(){
        int a;
        
        a = 777;
        printf("a = %d\n",a);
        f(a);                     /* pass the value of a */
        printf("a = %d\n",a);
}

void f(int b){                  /* receive value in b */
        b = 888;
}

