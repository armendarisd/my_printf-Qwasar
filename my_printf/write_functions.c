/*Contenido de write_functions.c*/

#include "write_functions.h"
#include "id_functions.h"
#include <unistd.h> 
#include <stdarg.h>
#include "stdio.h"
#include "stdlib.h"
#include <string.h>

/*  This function prints one character on the terminal*/
void my_printf(char* param_1, ...){
    int index = 0;
    int indexSize = 0;
    int string_size = 0;
    va_list args;
    va_start(args, param_1);

    while(param_1[index] != '\0'){
        if(param_1[index] == '%'){
            switch(param_1[index+1]){
                case 'd':
                string_size = string_size + my_putd(va_arg(args, int));
                break;

                case 'o':
                string_size = string_size + my_puto(va_arg(args, int));
                break;

                case 'u':
                string_size = string_size + my_putd(va_arg(args, int));
                break;

                case 'x':
                string_size = string_size + my_putx(va_arg(args, int));
                break;

                case 'c':
                string_size = string_size + my_putchar((char) va_arg( args, int ));
                break;

                case 's':
                string_size = string_size + my_putstr(va_arg( args, char * ));
                break;

                case 'p':
                
                break;
            }
            index = index + 2;
        }
        else{
            my_putchar(param_1[index]);
            index++;
        }
    } 
    if(param_1[index] == '\0'){
        my_putstr("The size is: ");
        my_putd(strlen(param_1)-(count_parameters(param_1)*2)+string_size);
    }
}

int my_putchar(char c) {
    return write(1, &c, sizeof(c));
}

int my_putstr(char* param_1){
    int index = 0;
    while(param_1[index] != '\0'){
        my_putchar(param_1[index]);
        index++;
    }
    return strlen(param_1);
}

/*This function converts a decimal to its ascii value*/
int my_putd(int param_1){

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
    return strlen(my_ascii_right);
}

/*This function converts a octal to its ascii value*/
int my_puto(int param_1){

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
    return strlen(my_ascii_right);
}

/*This function converts a octal to its ascii value*/
int my_putx(int param_1){

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
       my_mod = my_div%16;
       if(my_mod >= 10 ){
           switch(my_mod){
               case 10:
                    my_ascii_inverse[index1] = 'A';
                    my_div = my_div/16;
                    index1++;
               break;
               case 11:
                    my_ascii_inverse[index1] = 'B';
                    my_div = my_div/16;
                    index1++;
               break;
               case 12:
                    my_ascii_inverse[index1] = 'C';
                    my_div = my_div/16;
                    index1++;
               break;
               case 13:
                    my_ascii_inverse[index1] = 'D';
                    my_div = my_div/16;
                    index1++;
               break;
               case 14:
                    my_ascii_inverse[index1] = 'E';
                    my_div = my_div/16;
                    index1++;
               break;
               case 15:
                    my_ascii_inverse[index1] = 'F';
                    my_div = my_div/16;
                    index1++;
               break;
           }
       }
       else{
           my_ascii_inverse[index1] = my_mod + '0';
            my_div = my_div/16;
            index1++;
       }
       
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
    return strlen(my_ascii_right);
}

/*This function converts a decimal to its ascii value*/
int my_putp(int param_1){
    int* pointer = &param_1;
    
    int index = 3;

    

    while(pointer[index] != '\0'){
        my_putchar(pointer[index]);
        index++;
    }
    
    
    

return 0;
}


