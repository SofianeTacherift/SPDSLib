//
// Created by sofiane on 12/11/26.
//

#include "spds/array_list.h"

ARRAY_LIST(char *, strArrayList, str_array_list)

void str_print(char * s){
    printf("%s", s);
}

int main(void){
    strArrayList list;
    str_array_list_init(&list);
    str_array_list_add(&list, "Hello");
    str_array_list_add(&list, "World");
    str_array_list_println(&list, str_print);
    str_array_list_add_at(&list, "position 1", 1);
    str_array_list_println(&list, str_print);

    str_array_list_pop(&list);
    str_array_list_println(&list, str_print);
    str_array_list_deinit(&list);
}
