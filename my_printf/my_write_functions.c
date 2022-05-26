#include "my_write_functions.h"
#include <unistd.h> 
#include <stdarg.h>
#include "stdio.h"
#include "stdlib.h"
#include <string.h>


/*  This function prints one character on the terminal*/
int my_putchar(char c) {
    return write(1, &c, sizeof(c));
}

void my_putstr(char* param_1)
{
    int index = 0;
    while(param_1[index] != '\0'){
        my_putchar(param_1[index]);
        index++;
    }
    
}



