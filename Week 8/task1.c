#include <stdio.h>

char input[256] = "";

int main(){

    printf("Input string shorter than 256: ");
    scanf( "%s", input);

    for(int i = 0; input[i] != '\0'; ++i){
        if (input[i] == input[i+1]){
            input[i] = '*';
            input[i+1] = '*';
        }
    }
    
    printf("%s\n", input);
}

