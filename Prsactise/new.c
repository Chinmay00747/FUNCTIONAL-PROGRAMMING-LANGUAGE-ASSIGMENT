#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";      // str1 contains "Hello"
    char str3[100] = " hey,";     // str3 now has enough space to hold " hey," + "Hello"

    strcat(str3, str1);           // Concatenate str1 to str3
    printf("concatenated string: %s\n", str3);  // Print str3, which holds the concatenated result
    
    return 0;
}