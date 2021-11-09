#include <stdio.h>
#include <string.h>


void reversestring(char *string1){
    int len, temp;
    len = strlen(string1);

    for(int i=0; i<len/2; i++){
        temp = string1[i];
        string1[i] = string1[len - i - 1];
        string1[len - i - 1] = temp;
    }
}



int main() {

    char str[100];
    printf("Please enter your string: ");
    gets(str);
    printf("\n");

    reversestring(str);
    printf("Reversed string is: %s", str);




    return 0;
}
