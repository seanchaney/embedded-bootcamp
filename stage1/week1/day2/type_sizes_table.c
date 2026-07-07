#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

int main(void) {
    // Fundamental types
    printf("bool %2zu bytes\n", sizeof(bool));
    printf("char %2zu bytes\n", sizeof(char));
    printf("short %2zu bytes\n", sizeof(short));
    printf("int %2zu bytes\n", sizeof(int));
    printf("long %2zu bytes\n", sizeof(long));
    printf("long long %2zu bytes\n", sizeof(long long));
    printf("float %2zu bytes\n", sizeof(float));
    printf("double %2zu bytes\n", sizeof(double));
    printf("long double %2zu bytes\n", sizeof(long double));
    // Fixed-Width Types
    printf("int8_t / uint8_t %2zu bytes\n", sizeof(int8_t));
    printf("int16_t / uint16_t %2zu bytes\n", sizeof(int16_t));
    printf("int32_t / uint32_t %2zu bytes\n", sizeof(int32_t));
    printf("int64_t / uint64_t %2zu bytes\n", sizeof(int64_t));
    // System-Specific Types
    printf("void* (Pointer) %2zu bytes\n", sizeof(void*));
    printf("size_t %2zu bytes\n", sizeof(size_t));
    printf("intptr_t %2zu bytes\n", sizeof(intptr_t));

    return 0;
}