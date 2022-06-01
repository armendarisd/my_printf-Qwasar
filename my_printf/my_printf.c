#include "unistd.h" 
#include "stdarg.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "write_functions.h"
#include "id_functions.h"
#include <stddef.h>


int main() {
   

   
my_printf("%c%c%c%c%c!\n", 'H', 'e', 'l', 'l', 'o');
my_putd(my_printf("%c%c%c%c%c!\n", 'H', 'e', 'l', 'l', 'o'));
    
    return 0;
}