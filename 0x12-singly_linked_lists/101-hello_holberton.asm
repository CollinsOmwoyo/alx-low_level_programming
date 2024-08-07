section .data
msg db 'Hello, Holberton', 10 ; 10 is the ASCII code for newline
len equ $ - msg               ; Calculate the length of the message

section .text
global _start                 ; Entry point for the program

_start:
; Call printf function
mov rdi, fmt                  ; Format string
mov rsi, msg                  ; Pointer to the message
call printf                   ; Call printf function

; Exit program
mov rax, 60                   ; sys_exit system call
xor rdi, rdi                  ; Exit code 0
syscall                       ; Invoke syscall

section .data
fmt db '%s', 0                ; Format string for printf
