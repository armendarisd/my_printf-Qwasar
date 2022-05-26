/*Contenido de write_functions.c*/

#include "write_functions.h"
#include <unistd.h> 
#include <stdarg.h>
#include "stdio.h"
#include "stdlib.h"
#include <string.h>

/*  This function prints one character on the terminal*/
int my_putchar(char c) {
    return write(1, &c, sizeof(c));
}

void my_putstr(char* param_1, ...){
    int index = 0;
    va_list args;
    va_start(args, param_1);

    while(param_1[index] != '\0'){
        if(param_1[index] == '%'){
            switch(param_1[index+1]){
                case 'd':
                break;

                case 'o':
                break;

                case 'u':
                break;

                case 'x':
                break;

                case 'c':
                break;

                case 's':
                break;

                case 'p':
                break;
            }
        }
        my_putchar(param_1[index]);
        index++;
    }
    
}

/*This function converts a decimal to its ascii value*/
void my_putd(int param_1){

    char my_ascii_inverse[100]; 
    strcpy(my_ascii_inverse, "");
    char my_ascii_right[100];
    strcpy(my_ascii_right, " ");
    char* my_ascii_pointer;
    int my_div = param_1;
    int my_mod = 0;
    int index1 = 0;
    int index2 = 0;
    
    /*This part of the function stores the integer values in the array*/
    while(my_div != 0){
       my_mod = my_div%10;
       my_ascii_inverse[index1] = my_mod + '0';
       my_div = my_div/10;
       index1++;
    }
    my_ascii_inverse[index1] = '\0';
    index1 = 0;

    index2 = strlen(my_ascii_inverse);
    while(index2 != 0){
        my_ascii_right[index1] = my_ascii_inverse[index2-1];
        index1++;
        index2--;
    }
    my_ascii_right[index1] = '\0';

    my_putstr(my_ascii_right);
    
}

/*This function converts a octal to its ascii value*/
void my_puto(int param_1){

    char my_ascii_inverse[100]; 
    strcpy(my_ascii_inverse, "");
    char my_ascii_right[100];
    strcpy(my_ascii_right, " ");
    char* my_ascii_pointer;
    int my_div = param_1;
    int my_mod = 0;
    int index1 = 0;
    int index2 = 0;
    
    /*This part of the function stores the integer values in the array*/
    while(my_div != 0){
       my_mod = my_div%8;
       my_ascii_inverse[index1] = my_mod + '0';
       my_div = my_div/8;
       index1++;
    }
    my_ascii_inverse[index1] = '\0';
    index1 = 0;

    index2 = strlen(my_ascii_inverse);
    while(index2 != 0){
        my_ascii_right[index1] = my_ascii_inverse[index2-1];
        index1++;
        index2--;
    }
    my_ascii_right[index1] = '\0';

    my_putstr(my_ascii_right);
    
}
