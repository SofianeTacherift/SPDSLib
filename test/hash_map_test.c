//
// Created by sofiane on 12/11/26.
//

#include <spds/hash_map.h>
#include <string.h>

long str_hash(const char * str){
    long res =0;
    for (size_t i=0; i<strlen(str); i++){
        res=res*31+str[i];
    }
    return res;
}

bool str_equals(const char * s1, const char *s2){
    return (strcmp(s1, s2)==0);
}

void str_print(const char *s){
    printf("%s", s);
}
HASH_MAP(char *, int, StringIntHashMap, str_integer_entry, str_int_hash_map)

void print_str_int_entry(const str_integer_entry * entry){
    printf("%s - %d", entry->key !=NULL ? entry->key : "NULL", entry->value);
}




int main(void){
    char *keys[] = {"Hello", "World!", "this", "is","a", "hash", "map","lib","made","with","preprocessor"};
    StringIntHashMap map;
    str_int_hash_map_init(&map, str_hash, str_equals);
    str_int_hash_map_println(&map, print_str_int_entry);
    for (size_t i=0 ; i< sizeof keys / sizeof(char *); i++){
        str_int_hash_map_put(&map, keys[i], i*10);
    }
    str_int_hash_map_println(&map, print_str_int_entry);

    printf("remove 'Hello':\n");
    str_int_hash_map_remove(&map, "Hello");
    str_int_hash_map_println(&map, print_str_int_entry);

    str_int_hash_map_deinit(&map);


}