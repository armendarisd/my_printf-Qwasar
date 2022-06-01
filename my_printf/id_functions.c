/*Contenido de write_functions.c*/

#include "id_functions.h"
#include <unistd.h> 
#include <stdarg.h>
#include "stdio.h"
#include "stdlib.h"
#include <string.h>

/*This function counts the number of parameters of the input*/

int count_parameters(char* string){
    int index = 0;
    int counter = 0; 

    while(string[index] != '\0'){
        if(string[index] == '%'){
            counter++;
        }
        index++;
    }

    return counter;
}


/*This function handle the specifiers*/

char my_handle_specifiers(char* param_1){
    int index = 0;
    char specifier = ' ';
    while(param_1[index] != '\0'){
        if(param_1[index] == '%'){
            specifier = param_1[index+1];
            return specifier;
        }
        index++;
    }
    specifier = ' ';
    return specifier;
}
