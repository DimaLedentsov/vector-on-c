#include <stdio.h>
#include <stdlib.h>

#include "vector.h"

void* to_str(void* data){
    return data;
}

int main(void)
{

    vector v;
    vector_init(&v);

    vector_add(&v, "костя");
    vector_add(&v, "лох");
    vector_add(&v, "объелся");
    vector_add(&v, "блох");

    FILE *file;
    file = fopen("f.txt", "w");
    if (file == NULL){
        printf("Error opening file!\n");
        exit(1);
    }

    print_vector(&v,file, to_str);
    fclose(file);

    print_vector(&v,stdout, to_str);
    printf("\n");

    vector_free(&v);
}