#include "unistd.h" 
#include "stdarg.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "my_write_functions.h"
#include "my_identification.h"


int main(int argc, char * const argv[]){

    int d = +5;
    int o = 0177;
    int u = 6;
    int x = 0xFAFA;
    char c = 'c';
    char* s = "String";
    void *p = &u;

   my_putchar('c');
  
    
    
    return 0;
};