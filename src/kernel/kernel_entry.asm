global _start;

[bits 32]

_start:
    ; Define calling point. Must have same name as kernel.c 'main' function
    [extern kernelMain]

    ; Calls the C function. The linker will know where it is placed in memory
    call kernelMain
    jmp $