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

/*  %u This function organizes a String with an unsigned integer to be printed on the terminal*/
void my_putstru(char* param_1, char* param_2){
    int index = 0;
    int index1 = 1;
    while(param_1[index] != '\0'){
        if(param_1[index] == '%'){
             while(param_2[index1] != '\0'){
                my_putchar(param_2[index1]);
                index1++;
            }  
            index++;
        }
        else{
            my_putchar(param_1[index]);
        }
        index++;
    }
}

/*  %d This function organizes a String with an signed integer to be printed on the terminal*/
void my_putstrd(char* param_1, char* param_2){
    int index = 0;
    int index1 = 0;
    while(param_1[index] != '\0'){
        if(param_1[index] == '%'){
             while(param_2[index1] != '\0'){
                my_putchar(param_2[index1]);
                index1++;
            }  
            index++;
        }
        else{
            my_putchar(param_1[index]);
        }
        index++;
    }
}

/*  %c This function organizes a String with an char to be printed on the terminal*/
void my_putstrc(char* param_1, char* param_2){
    int index = 0;
    while(param_1[index] != '\0'){
        if(param_1[index] == '%'){
            my_putchar(param_2[0]);
            index++;
        }
        else{
            my_putchar(param_1[index]);
        }
        index++;
    }
}

/*  %s This function organizes a String with an string to be printed on the terminal*/
void my_putstrs(char* param_1, char* param_2){
    int index = 0;
    int index1 = 0;
    while(param_1[index] != '\0'){
        if(param_1[index] == '%'){
            while(param_2[index1] != '\0'){
                my_putchar(param_2[index1]);
                index1++;
            }  
            index++;
        }
        else{
            my_putchar(param_1[index]);
        }
        index++;
    }
}

/*  %x This function organizes a String with an hexadecimal value to be printed on the terminal*/
void my_putstrx(char* param_1, char* param_2){
    int index = 0;
    int index1 = 0;
    while(param_1[index] != '\0'){
        if(param_1[index] == '%'){
            while(param_2[index1] != '\0'){
                my_putchar(param_2[index1]);
                index1++;
            }  
            index++;
        }
        else{
            my_putchar(param_1[index]);
        }
        index++;
    }
}

/*This function handle the specifiers*/
char handle_specifiers(char* param_1){
    int index = 0;
    char specifier = ' ';
    while(param_1[index] != '\0'){
        if(param_1[index] == '%'){
            specifier = param_1[index+1];
            return specifier;
        }
        index++;
    }
    specifier = 'p';
    return specifier;
}

int main(int argc, char * const argv[])
{
  

     switch(handle_specifiers(argv[1])){
         case 'd':
            my_putstrd(argv[1], argv[2]);
         break;
         case 'u':
            my_putstru(argv[1], argv[2]);
         break;
         case 'c':
            my_putstrc(argv[1], argv[2]);
         break;
         case 's':
            my_putstrs(argv[1], argv[2]);
         break;
         case 'p':
            my_putstrd(argv[1], argv[2]);
         break;
         case 'x':
            my_putstrx(argv[1], argv[2]);
         break;
     }
     
     
    return 0;
}

