#include <stdio.h>

int main(){
        int   i;
        char  a[10]="tsukuba"; /* initialization with string constant */

        printf("a = ");
        for(i = 0; a[i] != '\0'; i = i+1){
                printf("%c",a[i]); /* output one character at a time */
        }
        printf("\n");

        printf("a = %s\n",a);   /* output using%s */
        
        a[0] = 'T';            /* can replace characters in the string */
        printf("a = %s\n",a);
        
        a[8] = 'X';            /* meaningless */
        printf("a = %s\n",a);

        a[7] = 'X';
        a[8] = '\0';           /* changing the null position */
        printf("a = %s\n",a);
}

