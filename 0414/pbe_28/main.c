#include <stdio.h>
#include <string.h>

int main(){
    char str1[81], str2[81];

    gets(str1);
    gets(str2);
    printf("\nresult of comparing str1 and str2 = %d characters\n", strcmp(str1, str2));

    return 0;
}