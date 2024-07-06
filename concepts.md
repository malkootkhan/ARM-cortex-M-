## Flash:
*Purpose:* Non-volatile memory for storing firmware permanently.
*Usage:* Holds sections like .text (executable code) and .rodata (read-only data).
*Execution:* Code executes directly from flash memory upon power-up.

## RAM:
*Purpose:* Volatile memory for temporary data storage during execution.
*Usage:* Stores runtime data, stack, and heap.
*Initialization:* .data section is copied from flash, and .bss section is zero-initialized in RAM during startup.

## Compiler:
*Function:* Translates high-level source code (e.g., C) into assembly code.
*Output:* Produces assembly code files.

## Assembler:
*Function:* Converts assembly language into machine code.
*Output:* Produces object files (.o) containing machine code instructions.

## Linker:
*Function:* Combines object files into a final executable binary.
*Address Resolution:* Assigns final memory addresses to code and data based on the linker script.
*Symbol Resolution:* Resolves references to functions and variables across multiple object files.
*Output:* Produces the final executable file.

## Workflow:
*Source Code:* Written in a high-level language (e.g., C).
*Preprocessing:* Handles directives and macro expansions.
*Compilation:* Converts source code into assembly code.
*Assembly:* Converts assembly code into machine code (object files).
*Linking:* Combines object files, resolves symbols, assigns addresses, and produces the executable.
*Flashing:* Final binary is programmed into flash memory.
*Execution:* Microcontroller starts execution from flash, using RAM for runtime operations.
