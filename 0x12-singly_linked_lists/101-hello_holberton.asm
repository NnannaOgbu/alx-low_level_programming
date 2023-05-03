section .data
    message db "Hello, Holberton", 0x0a, 0x00
    format db "%s"

section .text
    global main

    extern printf

main:
    ; prepare arguments for printf
    mov rdi, format
    mov rsi, message
    xor eax, eax
    
    ; call printf
    call printf
    
    ; exit program
    xor eax, eax
    ret
