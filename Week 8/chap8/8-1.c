#include <stdio.h>

int main(){
        int   i;
        char  a[10];    /* declaring a 10-element character array */

        a[0] = 't';
        a[1] = 's';
        a[2] = 'u';
        a[3] = 'k';
        a[4] = 'u';
        a[5] = 'b';
        a[6] = 'a';
        a[7] = '\0';     /*  string ends here */
        
        printf("a = ");
        for(i = 0; a[i] != '\0'; i = i+1){ /* repeat output until it encounters a null */
                printf("%c",a[i]);
        }
        printf("\n");
}

