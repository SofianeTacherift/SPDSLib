//
// Created by sofiane on 12/11/26.
//

#include <spds/hash_set.h>
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


HASH_SET(char *, str_hash_set, str_cell)


int main(void){
    char *words[] = {"Hello", "World!", "This", "is","a", "hash", "set","lib","made","with","preprocessor"};
    str_hash_set set;
    str_hash_set_init(&set, str_hash, str_equals);
    str_hash_set_println(&set, str_print );
    for (size_t i=0; i<sizeof words/sizeof (char*); i++){
        str_hash_set_add(&set, words[i]);
        str_hash_set_println(&set, str_print );
    }
    str_hash_set_add(&set, "this str should resize the set");
    str_hash_set_println(&set, str_print );

}