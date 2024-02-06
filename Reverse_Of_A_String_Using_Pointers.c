#include <stdio.h>
#include <string.h>
void reverseString(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);
    reverseString(inputString);
    printf("Reversed string: %s\n", inputString);
    return 0;
} 

