#include <stdio.h>

/* 
 * External Linkage (Global)
 * variable is exposed to linker
 */
int global_system_state = 43;

/*
 * Internal Linkage (File-scope / static)
 * 'static' keyword traps variable inside linkage_defs.c file
 * Compiler will hide the variable from the linker
 */
static int hidden_data_val = 12;

/*
 * Function to show hidden variable is readable within linkage_defs.c where it was created 
 */
void print_from_defs_file(void) {
    printf("global_system_state = %d\n", global_system_state);
    printf("hidden_data_val = %d\n", hidden_data_val);
}