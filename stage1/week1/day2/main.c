#include <stdio.h>

extern int global_system_state;
extern void print_from_defs_file(void);

// Uncomment line below is to test if hidden variable from linkage_defs.c is accessible
// extern int hidden_data_val;

int main(void) {
    // Show both variables exist and work in base file
    print_from_defs_file();

    // Access the external linakge variable directly from this file
    printf("Read global_system_state directly: %d\n", global_system_state);

    // Uncomment code below to test error of trying to access static variable
    // printf("Read hidden_data_val directly: %d\n", hidden_data_val);
}