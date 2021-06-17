#include <stdio.h>
void f(int[]);

int main(){
        int a[3];
        
        a[0] = 777; a[1] = 778; a[2] = 779;
        printf("a = %d, %d, %d\n",a[0],a[1],a[2]);
        f(a);                                   /* pass the top address of a */
        printf("a = %d, %d, %d\n",a[0],a[1],a[2]);
}

void f(int b[]){                              /* receive the top address in b */
        b[1] = 888;
}
