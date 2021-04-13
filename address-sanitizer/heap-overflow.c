#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    char *str = malloc(2);
    //Destination not large enough to hold the source.
    //Program will crash
    strcpy(str, "Hello!");
    printf("Value is: %s\n", str);
    free(str);
    return 0;
}
