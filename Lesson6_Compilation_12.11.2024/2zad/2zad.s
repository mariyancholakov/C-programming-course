	.file	"2zad.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Enter two integers: \0"
LC1:
	.ascii "%d %d\0"
LC2:
	.ascii "NOK: %d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$0, 44(%esp)
	movl	$LC0, (%esp)
	call	_printf
	leal	28(%esp), %eax
	movl	%eax, 8(%esp)
	leal	32(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$1, 40(%esp)
	jmp	L2
L8:
	movl	$1, 36(%esp)
	jmp	L3
L5:
	movl	32(%esp), %eax
	imull	36(%esp), %eax
	movl	%eax, %edx
	movl	28(%esp), %eax
	imull	40(%esp), %eax
	cmpl	%eax, %edx
	jne	L4
	movl	32(%esp), %eax
	imull	36(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$1, 44(%esp)
L4:
	addl	$1, 36(%esp)
L3:
	movl	32(%esp), %eax
	cmpl	%eax, 36(%esp)
	jl	L5
	cmpl	$0, 44(%esp)
	jne	L10
	addl	$1, 40(%esp)
L2:
	movl	32(%esp), %edx
	movl	28(%esp), %eax
	addl	%edx, %eax
	cmpl	40(%esp), %eax
	jg	L8
	jmp	L7
L10:
	nop
L7:
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
