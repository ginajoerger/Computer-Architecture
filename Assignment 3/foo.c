//Author: Gina Joerger
//Purpose of Program: To tranition from Assembly to C

#include "given/foo.h"

long foo(long a, long b){
	long c = 3 * a; //leaq (%rdi, %rdi, 2), %rax

	c = 4 * c + a; //leaq (%rdi, %rax, 4), %rax
	c = 52 * a; //shlq $2, %rax

	long d = 3 * b; //leaq (%rsi, %rsi, 2), %rcx
	long e = d; //movq %rcx, %rdx

	e = e * 32; //shlq $5, %rdx
	e -= d; //subq %rcx, %rdx

	c += e; //addq %rdx, %rax

	e = 3 * (b - a); //leaq (%rsi, %rsi, 2), %rdx
	e *= 32; //shlq $5, %rdx
	e -= (b - a); //subq %rsi, %rdx

	c += e; //addq %rdx, %rax

	return c;
}