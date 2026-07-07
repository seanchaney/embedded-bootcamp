#include <stdio.h>

int main(void) {
    // standard variable
    int data = 19;

    // declare pointer and assign address of data
    int *ptr = &data;

    // print addresses
    printf("The value of data is %d\n", data);
    printf("The address of data is %p\n", (void*)&data);
    printf("The value of ptr is %p\n", (void*)ptr);
    printf("The address of ptr is %p\n\n", (void*)&ptr);

    // dereference to read
    printf("Dereferencing ptr gives %d\n", *ptr);

    // dereference to write
    printf("Changing value via pointer (*ptr = 99;)\n");
    *ptr = 99;

    printf("The new value of data is %d\n", data);
}