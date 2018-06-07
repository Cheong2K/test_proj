#include <stdio.h>
#include <string.h>

int main(void)
{
    char my_string[] = "Hello, world!";

    printf("%s\r\n", &my_string[7]);


    return 1;
}

