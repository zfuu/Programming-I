#include <stdio.h>

void replace(char[],char,char);

int main(){
        char  input[80];
        
        printf("Enter a string:");
        scanf("%s",input);         /* read a string */

        replace(input, 'a', 'A');      /* search and replace characters */
        replace(input, 'i', 'I');
        replace(input, 'u', 'U');
        replace(input, 'e', 'E');
        replace(input, 'o', 'O');
        
        printf("%s\n",input);       /* output a string */
}

void replace(char a[], char c, char d){
        int  i;
        for(i = 0; a[i] != '\0'; i = i+1){
                if(a[i] == c){        /* if a[i] equals c */
                        a[i] = d;    /* replace the value of a[i] with d */
                }
        }
}

