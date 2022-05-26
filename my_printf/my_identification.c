#include "my_identification.h"
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


/*This function converts a integer to its ascii value*/

void my_itoa(int param_1){

    char my_ascii_inverse[100]; 
    strcpy(my_ascii_inverse, "Hola me llamo ruel ");
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







