//
// Created by sofiane on 12/11/26.
//


#include "spds/hash_utils.h"
#include <stdio.h>

#define PRINT_BOOL(CONDITION) printf("%s : %s\n", #CONDITION, CONDITION ? "true" : "false");
int main(void){
    PRINT_BOOL(needs_resize(11, 16) )
    PRINT_BOOL(needs_resize(12, 16) )
    PRINT_BOOL(needs_resize(23, 32) )
    PRINT_BOOL(needs_resize(24, 32) )
}