#include <stdio.h>

/* All interrupts have their unique interrupt numbers */
enum interrupt {INT0, INT1, INT2, INT3};

/* This weak attribute tells the compiler the functions will be redefined later or overridden */
__attribute__((weak)) void display0();
__attribute__((weak)) void display1();
__attribute__((weak)) void display2();
__attribute__((weak)) void display3();



int main() {
    // __attribute__((section(".isr_vector"))) tells the compiler to place this function pointer array in the .isr_vector memory section
    // The processor expects this section to contain the interrupt vector table.
    // Initially, the weak functions are assigned to the array, and their addresses are stored in the vector table.
    // These functions can later be overridden with actual ISR code, and each interrupt has a unique number
    // which is used as an index in the function pointer array to call the relevant ISR.
    
    /* __attribute__((section(".isr_vector"))) */
    void (*isr_vector[])() = {
        display0,
        display1,
        display2,
        display3
    };
    
    /* As all interrupts have their unique interrupt number */
    isr_vector[INT0](); // INT0 is the interrupt number of the first interrupt
    isr_vector[INT1]();
    isr_vector[INT2]();
    isr_vector[INT3]();

    /* Alternatively, you could iterate through all possible interrupts */
    /*
    for (int interrupt = 0; interrupt <= INT3; interrupt++) {
        isr_vector[interrupt]();
    }
    */
    
    return 0;
}

void display0() {
    printf("ISR for INT0\n");
}

void display1() {
    printf("ISR for INT1\n");
}

void display2() {
    printf("ISR for INT2\n");
}

void display3() {
    printf("ISR for INT3\n");
}
