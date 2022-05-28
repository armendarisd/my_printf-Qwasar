#include "unistd.h" 
#include "stdarg.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "write_functions.h"
#include "id_functions.h"


int main() {
   

    int a;
    int *ptr_a = &a;
    my_printf("Hello world %d %d", 5, 6);
    
    return 0;
}