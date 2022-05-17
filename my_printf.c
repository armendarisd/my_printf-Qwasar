#include <unistd.h> 
#include <stdarg.h>
#include "stdio.h"
#include "stdlib.h"

/*This function prints one character on the terminal*/
int my_putchar(char c) {
    return write(1, &c, sizeof(c));
}

/*This function prints one integer on the terminal*/
int my_putd(char c){
    return write(1, &c, sizeof(c));
}

/*This function organizes a String to be printed on the terminal*/
void my_putstrd(char* param_1, char* param_2){
    int index = 0;
    while(param_1[index] != '\0'){
        if(param_1[index] == '%'){
            my_putd(param_2[0]);
            index++;
        }
        else{
            my_putchar(param_1[index]);
        }
        index++;
    }
}

int main(int argc, char * const argv[])
{
     
     my_putstrd(argv[1], argv[2]);
     
    return 0;
}

