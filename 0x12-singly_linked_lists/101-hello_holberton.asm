section .data
msg db 'Hello, Holberton', 10, 0  ; Null-terminated string with newline

section .text
global _start
extern printf

_start:
; Call printf
mov rdi, fmt          ; Format string
mov rsi, msg          ; Message to print
call printf           ; Call printf

; Exit program
mov rax, 60           ; sys_exit system call
xor rdi, rdi          ; Exit code 0
syscall               ; Invoke syscall

section .data
fmt db '%s', 0        ; Format string for printf
