	.file	"assignment_task_2.cpp"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv,"axG",@progbits,_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv,comdat
	.align 2
	.weak	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv
	.type	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv, @function
_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv:
.LFB1771:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1771:
	.size	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv, .-_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv
	.section	.text._ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_,"axG",@progbits,_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_,comdat
	.align 2
	.weak	_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_
	.type	_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_, @function
_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_:
.LFB1776:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1776:
	.size	_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_, .-_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_
	.text
	.globl	_Z18generateRandosLONGPxi
	.type	_Z18generateRandosLONGPxi, @function
_Z18generateRandosLONGPxi:
.LFB1794:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$700453594, %edi
	call	srand@PLT
	movl	$0, -4(%rbp)
.L6:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jge	.L7
	call	rand@PLT
	movslq	%eax, %rcx
	movabsq	$4611686018427387905, %rdx
	movq	%rcx, %rax
	imulq	%rdx
	sarq	$61, %rdx
	movq	%rcx, %rax
	sarq	$63, %rax
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, %rdx
	salq	$63, %rdx
	subq	%rax, %rdx
	movq	%rcx, %rax
	subq	%rdx, %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	movq	-24(%rbp), %rdx
	addq	%rcx, %rdx
	movabsq	$-9223372036854775807, %rcx
	addq	%rcx, %rax
	movq	%rax, (%rdx)
	addl	$1, -4(%rbp)
	jmp	.L6
.L7:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1794:
	.size	_Z18generateRandosLONGPxi, .-_Z18generateRandosLONGPxi
	.globl	_Z17generateRandosINTPii
	.type	_Z17generateRandosINTPii, @function
_Z17generateRandosINTPii:
.LFB1795:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$700453594, %edi
	call	srand@PLT
	movl	$0, -4(%rbp)
.L10:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jge	.L11
	call	rand@PLT
	movl	%eax, %ecx
	movslq	%ecx, %rdx
	movq	%rdx, %rax
	salq	$30, %rax
	addq	%rdx, %rax
	shrq	$32, %rax
	movl	%eax, %edx
	sarl	$29, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, %edx
	sall	$31, %edx
	subl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	movq	-24(%rbp), %rdx
	addq	%rcx, %rdx
	subl	$2147483647, %eax
	movl	%eax, (%rdx)
	addl	$1, -4(%rbp)
	jmp	.L10
.L11:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1795:
	.size	_Z17generateRandosINTPii, .-_Z17generateRandosINTPii
	.globl	_Z6mergeLPxiii
	.type	_Z6mergeLPxiii, @function
_Z6mergeLPxiii:
.LFB1796:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	subq	$96, %rsp
	.cfi_offset 15, -24
	.cfi_offset 14, -32
	.cfi_offset 13, -40
	.cfi_offset 12, -48
	movq	%rdi, -104(%rbp)
	movl	%esi, -108(%rbp)
	movl	%edx, -112(%rbp)
	movl	%ecx, -116(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -40(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rsi
	movl	-112(%rbp), %eax
	subl	-108(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -80(%rbp)
	movl	-116(%rbp), %eax
	subl	-112(%rbp), %eax
	movl	%eax, -76(%rbp)
	movl	-80(%rbp), %eax
	cltq
	subq	$1, %rax
	movq	%rax, -72(%rbp)
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, %r14
	movl	$0, %r15d
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, %r12
	movl	$0, %r13d
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %edi
	movl	$0, %edx
	divq	%rdi
	imulq	$16, %rax, %rax
	movq	%rax, %rdx
	andq	$-4096, %rdx
	movq	%rsp, %rdi
	subq	%rdx, %rdi
	movq	%rdi, %rdx
.L13:
	cmpq	%rdx, %rsp
	je	.L14
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L13
.L14:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L15
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L15:
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -64(%rbp)
	movl	-76(%rbp), %eax
	cltq
	subq	$1, %rax
	movq	%rax, -56(%rbp)
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, %r10
	movl	$0, %r11d
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, %r8
	movl	$0, %r9d
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %edi
	movl	$0, %edx
	divq	%rdi
	imulq	$16, %rax, %rax
	movq	%rax, %rdx
	andq	$-4096, %rdx
	movq	%rsp, %rdi
	subq	%rdx, %rdi
	movq	%rdi, %rdx
.L16:
	cmpq	%rdx, %rsp
	je	.L17
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L16
.L17:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L18
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L18:
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -48(%rbp)
	movl	$0, -84(%rbp)
.L20:
	movl	-84(%rbp), %eax
	cmpl	-80(%rbp), %eax
	jge	.L19
	movl	-108(%rbp), %edx
	movl	-84(%rbp), %eax
	addl	%edx, %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-104(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	%eax, %ecx
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	%ecx, (%rax,%rdx,4)
	addl	$1, -84(%rbp)
	jmp	.L20
.L19:
	movl	$0, -88(%rbp)
.L22:
	movl	-88(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jge	.L21
	movl	-112(%rbp), %eax
	leal	1(%rax), %edx
	movl	-88(%rbp), %eax
	addl	%edx, %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-104(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movl	%eax, %ecx
	movq	-48(%rbp), %rax
	movl	-88(%rbp), %edx
	movslq	%edx, %rdx
	movl	%ecx, (%rax,%rdx,4)
	addl	$1, -88(%rbp)
	jmp	.L22
.L21:
	movl	$0, -84(%rbp)
	movl	$0, -88(%rbp)
	movl	-108(%rbp), %eax
	movl	%eax, -92(%rbp)
.L26:
	movl	-84(%rbp), %eax
	cmpl	-80(%rbp), %eax
	jge	.L28
	movl	-88(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jge	.L28
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %ecx
	movq	-48(%rbp), %rax
	movl	-88(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	cmpl	%eax, %ecx
	jg	.L24
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	-92(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	movq	-104(%rbp), %rdx
	addq	%rcx, %rdx
	cltq
	movq	%rax, (%rdx)
	addl	$1, -84(%rbp)
	jmp	.L25
.L24:
	movq	-48(%rbp), %rax
	movl	-88(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	-92(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	movq	-104(%rbp), %rdx
	addq	%rcx, %rdx
	cltq
	movq	%rax, (%rdx)
	addl	$1, -88(%rbp)
.L25:
	addl	$1, -92(%rbp)
	jmp	.L26
.L28:
	movl	-84(%rbp), %eax
	cmpl	-80(%rbp), %eax
	jge	.L27
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	-92(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	movq	-104(%rbp), %rdx
	addq	%rcx, %rdx
	cltq
	movq	%rax, (%rdx)
	addl	$1, -84(%rbp)
	addl	$1, -92(%rbp)
	jmp	.L28
.L27:
	movl	-84(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jge	.L29
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	-92(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	movq	-104(%rbp), %rdx
	addq	%rcx, %rdx
	cltq
	movq	%rax, (%rdx)
	addl	$1, -88(%rbp)
	addl	$1, -92(%rbp)
	jmp	.L27
.L29:
	movq	%rsi, %rsp
	nop
	movq	-40(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L30
	call	__stack_chk_fail@PLT
.L30:
	leaq	-32(%rbp), %rsp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1796:
	.size	_Z6mergeLPxiii, .-_Z6mergeLPxiii
	.globl	_Z10mergeSortLPxii
	.type	_Z10mergeSortLPxii, @function
_Z10mergeSortLPxii:
.LFB1797:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	movl	-28(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jge	.L32
	movl	-32(%rbp), %eax
	subl	-28(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %edx
	movl	-28(%rbp), %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_Z10mergeSortLPxii
	movl	-8(%rbp), %eax
	leal	1(%rax), %ecx
	movl	-32(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_Z10mergeSortLPxii
	movl	-32(%rbp), %ecx
	movl	-8(%rbp), %edx
	movl	-28(%rbp), %esi
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_Z6mergeLPxiii
.L32:
	movl	$0, -4(%rbp)
	addl	$1, -4(%rbp)
	subl	$1, -4(%rbp)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1797:
	.size	_Z10mergeSortLPxii, .-_Z10mergeSortLPxii
	.globl	_Z5mergePiiii
	.type	_Z5mergePiiii, @function
_Z5mergePiiii:
.LFB1798:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	subq	$96, %rsp
	.cfi_offset 15, -24
	.cfi_offset 14, -32
	.cfi_offset 13, -40
	.cfi_offset 12, -48
	movq	%rdi, -104(%rbp)
	movl	%esi, -108(%rbp)
	movl	%edx, -112(%rbp)
	movl	%ecx, -116(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -40(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rsi
	movl	-112(%rbp), %eax
	subl	-108(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -80(%rbp)
	movl	-116(%rbp), %eax
	subl	-112(%rbp), %eax
	movl	%eax, -76(%rbp)
	movl	-80(%rbp), %eax
	cltq
	subq	$1, %rax
	movq	%rax, -72(%rbp)
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, %r14
	movl	$0, %r15d
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, %r12
	movl	$0, %r13d
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %edi
	movl	$0, %edx
	divq	%rdi
	imulq	$16, %rax, %rax
	movq	%rax, %rdx
	andq	$-4096, %rdx
	movq	%rsp, %rdi
	subq	%rdx, %rdi
	movq	%rdi, %rdx
.L34:
	cmpq	%rdx, %rsp
	je	.L35
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L34
.L35:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L36
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L36:
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -64(%rbp)
	movl	-76(%rbp), %eax
	cltq
	subq	$1, %rax
	movq	%rax, -56(%rbp)
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, %r10
	movl	$0, %r11d
	movq	%rax, %rdx
	addq	$1, %rdx
	movq	%rdx, %r8
	movl	$0, %r9d
	addq	$1, %rax
	leaq	0(,%rax,4), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %edi
	movl	$0, %edx
	divq	%rdi
	imulq	$16, %rax, %rax
	movq	%rax, %rdx
	andq	$-4096, %rdx
	movq	%rsp, %rdi
	subq	%rdx, %rdi
	movq	%rdi, %rdx
.L37:
	cmpq	%rdx, %rsp
	je	.L38
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	jmp	.L37
.L38:
	movq	%rax, %rdx
	andl	$4095, %edx
	subq	%rdx, %rsp
	movq	%rax, %rdx
	andl	$4095, %edx
	testq	%rdx, %rdx
	je	.L39
	andl	$4095, %eax
	subq	$8, %rax
	addq	%rsp, %rax
	orq	$0, (%rax)
.L39:
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -48(%rbp)
	movl	$0, -84(%rbp)
.L41:
	movl	-84(%rbp), %eax
	cmpl	-80(%rbp), %eax
	jge	.L40
	movl	-108(%rbp), %edx
	movl	-84(%rbp), %eax
	addl	%edx, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %ecx
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	%ecx, (%rax,%rdx,4)
	addl	$1, -84(%rbp)
	jmp	.L41
.L40:
	movl	$0, -88(%rbp)
.L43:
	movl	-88(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jge	.L42
	movl	-112(%rbp), %eax
	leal	1(%rax), %edx
	movl	-88(%rbp), %eax
	addl	%edx, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %ecx
	movq	-48(%rbp), %rax
	movl	-88(%rbp), %edx
	movslq	%edx, %rdx
	movl	%ecx, (%rax,%rdx,4)
	addl	$1, -88(%rbp)
	jmp	.L43
.L42:
	movl	$0, -84(%rbp)
	movl	$0, -88(%rbp)
	movl	-108(%rbp), %eax
	movl	%eax, -92(%rbp)
.L47:
	movl	-84(%rbp), %eax
	cmpl	-80(%rbp), %eax
	jge	.L49
	movl	-88(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jge	.L49
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %ecx
	movq	-48(%rbp), %rax
	movl	-88(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	cmpl	%eax, %ecx
	jg	.L45
	movl	-92(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, (%rcx)
	addl	$1, -84(%rbp)
	jmp	.L46
.L45:
	movl	-92(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-48(%rbp), %rax
	movl	-88(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, (%rcx)
	addl	$1, -88(%rbp)
.L46:
	addl	$1, -92(%rbp)
	jmp	.L47
.L49:
	movl	-84(%rbp), %eax
	cmpl	-80(%rbp), %eax
	jge	.L48
	movl	-92(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, (%rcx)
	addl	$1, -84(%rbp)
	addl	$1, -92(%rbp)
	jmp	.L49
.L48:
	movl	-84(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jge	.L50
	movl	-92(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, (%rcx)
	addl	$1, -88(%rbp)
	addl	$1, -92(%rbp)
	jmp	.L48
.L50:
	movq	%rsi, %rsp
	nop
	movq	-40(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L51
	call	__stack_chk_fail@PLT
.L51:
	leaq	-32(%rbp), %rsp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1798:
	.size	_Z5mergePiiii, .-_Z5mergePiiii
	.globl	_Z9mergeSortPiii
	.type	_Z9mergeSortPiii, @function
_Z9mergeSortPiii:
.LFB1799:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	movl	-28(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jge	.L53
	movl	-32(%rbp), %eax
	subl	-28(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %edx
	movl	-28(%rbp), %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_Z9mergeSortPiii
	movl	-8(%rbp), %eax
	leal	1(%rax), %ecx
	movl	-32(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	_Z9mergeSortPiii
	movl	-32(%rbp), %ecx
	movl	-8(%rbp), %edx
	movl	-28(%rbp), %esi
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_Z5mergePiiii
.L53:
	movl	$0, -4(%rbp)
	addl	$1, -4(%rbp)
	subl	$1, -4(%rbp)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1799:
	.size	_Z9mergeSortPiii, .-_Z9mergeSortPiii
	.globl	_Z13insertionSortPii
	.type	_Z13insertionSortPii, @function
_Z13insertionSortPii:
.LFB1800:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$1, -8(%rbp)
.L58:
	movl	-8(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jge	.L59
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -12(%rbp)
.L57:
	cmpl	$0, -12(%rbp)
	jle	.L56
	movl	-12(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	%eax, -4(%rbp)
	jge	.L56
	movl	-12(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	movq	-24(%rbp), %rdx
	addq	%rcx, %rdx
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	subl	$1, -12(%rbp)
	jmp	.L57
.L56:
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	movl	%eax, (%rdx)
	addl	$1, -8(%rbp)
	jmp	.L58
.L59:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1800:
	.size	_Z13insertionSortPii, .-_Z13insertionSortPii
	.globl	_Z14insertionSortLPxi
	.type	_Z14insertionSortLPxi, @function
_Z14insertionSortLPxi:
.LFB1801:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$1, -12(%rbp)
.L64:
	movl	-12(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jge	.L65
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -16(%rbp)
.L63:
	cmpl	$0, -16(%rbp)
	jle	.L62
	movl	-16(%rbp), %eax
	cltq
	salq	$3, %rax
	leaq	-8(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	cmpq	%rax, -8(%rbp)
	jge	.L62
	movl	-16(%rbp), %eax
	cltq
	salq	$3, %rax
	leaq	-8(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,8), %rcx
	movq	-24(%rbp), %rdx
	addq	%rcx, %rdx
	movq	(%rax), %rax
	movq	%rax, (%rdx)
	subl	$1, -16(%rbp)
	jmp	.L63
.L62:
	movl	-16(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rax, (%rdx)
	addl	$1, -12(%rbp)
	jmp	.L64
.L65:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1801:
	.size	_Z14insertionSortLPxi, .-_Z14insertionSortLPxi
	.section	.rodata
.LC0:
	.string	" ints sorted in "
	.align 8
.LC1:
	.string	" nanoseconds by insertion sort"
.LC2:
	.string	" nanoseconds by merge sort"
.LC3:
	.string	" long long ints sorted in "
	.text
	.globl	_Z5runIti
	.type	_Z5runIti, @function
_Z5runIti:
.LFB1802:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$104, %rsp
	.cfi_offset 3, -24
	movl	%edi, -100(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movl	-100(%rbp), %eax
	movl	%eax, -92(%rbp)
	movl	-92(%rbp), %eax
	cltq
	salq	$2, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -56(%rbp)
	movl	-92(%rbp), %eax
	cltq
	salq	$2, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -48(%rbp)
	movl	-92(%rbp), %eax
	cltq
	salq	$3, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -40(%rbp)
	movl	-92(%rbp), %eax
	cltq
	salq	$3, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -32(%rbp)
	movl	-92(%rbp), %edx
	movq	-56(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_Z17generateRandosINTPii
	movl	-92(%rbp), %edx
	movq	-48(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_Z17generateRandosINTPii
	call	_ZNSt6chrono3_V212steady_clock3nowEv@PLT
	movq	%rax, -88(%rbp)
	movl	-92(%rbp), %edx
	movq	-48(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_Z13insertionSortPii
	call	_ZNSt6chrono3_V212steady_clock3nowEv@PLT
	movq	%rax, -80(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEi@PLT
	leaq	.LC0(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-88(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6chronomiINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE
	movq	%rax, -72(%rbp)
	leaq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE
	movq	%rax, -64(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv
	movq	%rax, %rsi
	movq	%rbx, %rdi
	call	_ZNSolsEl@PLT
	leaq	.LC1(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	call	_ZNSt6chrono3_V212steady_clock3nowEv@PLT
	movq	%rax, -88(%rbp)
	movl	-92(%rbp), %eax
	leal	-1(%rax), %edx
	movq	-56(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	_Z9mergeSortPiii
	call	_ZNSt6chrono3_V212steady_clock3nowEv@PLT
	movq	%rax, -80(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEi@PLT
	leaq	.LC0(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-88(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6chronomiINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE
	movq	%rax, -72(%rbp)
	leaq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE
	movq	%rax, -64(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv
	movq	%rax, %rsi
	movq	%rbx, %rdi
	call	_ZNSolsEl@PLT
	leaq	.LC2(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movl	-92(%rbp), %edx
	movq	-40(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_Z18generateRandosLONGPxi
	movl	-92(%rbp), %edx
	movq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_Z18generateRandosLONGPxi
	call	_ZNSt6chrono3_V212steady_clock3nowEv@PLT
	movq	%rax, -88(%rbp)
	movl	-92(%rbp), %edx
	movq	-32(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_Z14insertionSortLPxi
	call	_ZNSt6chrono3_V212steady_clock3nowEv@PLT
	movq	%rax, -80(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEi@PLT
	leaq	.LC3(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-88(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6chronomiINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE
	movq	%rax, -72(%rbp)
	leaq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE
	movq	%rax, -64(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv
	movq	%rax, %rsi
	movq	%rbx, %rdi
	call	_ZNSolsEl@PLT
	leaq	.LC1(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	call	_ZNSt6chrono3_V212steady_clock3nowEv@PLT
	movq	%rax, -88(%rbp)
	movl	-92(%rbp), %eax
	leal	-1(%rax), %edx
	movq	-40(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	_Z10mergeSortLPxii
	call	_ZNSt6chrono3_V212steady_clock3nowEv@PLT
	movq	%rax, -80(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEi@PLT
	leaq	.LC3(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	leaq	-88(%rbp), %rdx
	leaq	-80(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6chronomiINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE
	movq	%rax, -72(%rbp)
	leaq	-72(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE
	movq	%rax, -64(%rbp)
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv
	movq	%rax, %rsi
	movq	%rbx, %rdi
	call	_ZNSolsEl@PLT
	leaq	.LC2(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-56(%rbp), %rax
	testq	%rax, %rax
	je	.L67
	movl	$4, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
.L67:
	movq	-48(%rbp), %rax
	testq	%rax, %rax
	je	.L68
	movl	$4, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
.L68:
	movq	-40(%rbp), %rax
	testq	%rax, %rax
	je	.L69
	movl	$8, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
.L69:
	movq	-32(%rbp), %rax
	testq	%rax, %rax
	je	.L72
	movl	$8, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
.L72:
	nop
	movq	-24(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L71
	call	__stack_chk_fail@PLT
.L71:
	addq	$104, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1802:
	.size	_Z5runIti, .-_Z5runIti
	.section	.rodata
	.align 8
.LC4:
	.string	"What would you like the upper bound to be? (will start at 100,000 and increment by 100,000 until exceeding upper bound)"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1803:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC4(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rdi
	call	_ZNSirsERi@PLT
	movl	$100000, -12(%rbp)
.L75:
	movl	-16(%rbp), %eax
	cmpl	%eax, -12(%rbp)
	jg	.L74
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	_Z5runIti
	addl	$100000, -12(%rbp)
	jmp	.L75
.L74:
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L77
	call	__stack_chk_fail@PLT
.L77:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1803:
	.size	main, .-main
	.section	.text._ZNSt6chronomiINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE,"axG",@progbits,_ZNSt6chronomiINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE,comdat
	.weak	_ZNSt6chronomiINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE
	.type	_ZNSt6chronomiINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE, @function
_ZNSt6chronomiINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE:
.LFB2069:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6chrono10time_pointINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv
	movq	%rax, -16(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6chrono10time_pointINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv
	movq	%rax, -24(%rbp)
	leaq	-16(%rbp), %rdx
	leaq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L80
	call	__stack_chk_fail@PLT
.L80:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2069:
	.size	_ZNSt6chronomiINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE, .-_ZNSt6chronomiINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEES6_EENSt11common_typeIJT0_T1_EE4typeERKNS_10time_pointIT_S8_EERKNSC_ISD_S9_EE
	.section	.text._ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE,"axG",@progbits,_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE,comdat
	.weak	_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE
	.type	_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE, @function
_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE:
.LFB2070:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2070:
	.size	_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE, .-_ZNSt6chrono13duration_castINS_8durationIlSt5ratioILl1ELl1000000000EEEElS3_EENSt9enable_ifIXsrNS_13__is_durationIT_EE5valueES7_E4typeERKNS1_IT0_T1_EE
	.section	.text._ZNKSt6chrono10time_pointINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv,"axG",@progbits,_ZNKSt6chrono10time_pointINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv,comdat
	.align 2
	.weak	_ZNKSt6chrono10time_pointINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv
	.type	_ZNKSt6chrono10time_pointINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv, @function
_ZNKSt6chrono10time_pointINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv:
.LFB2189:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2189:
	.size	_ZNKSt6chrono10time_pointINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv, .-_ZNKSt6chrono10time_pointINS_3_V212steady_clockENS_8durationIlSt5ratioILl1ELl1000000000EEEEE16time_since_epochEv
	.section	.text._ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_,"axG",@progbits,_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_,comdat
	.weak	_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_
	.type	_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_, @function
_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_:
.LFB2190:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -72(%rbp)
	movq	%rsi, -80(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-72(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -56(%rbp)
	leaq	-56(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv
	movq	%rax, %rbx
	movq	-80(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -48(%rbp)
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv
	subq	%rax, %rbx
	movq	%rbx, %rax
	movq	%rax, -40(%rbp)
	leaq	-40(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_
	movq	-32(%rbp), %rax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L87
	call	__stack_chk_fail@PLT
.L87:
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2190:
	.size	_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_, .-_ZNSt6chronomiIlSt5ratioILl1ELl1000000000EElS2_EENSt11common_typeIJNS_8durationIT_T0_EENS4_IT1_T2_EEEE4typeERKS7_RKSA_
	.section	.text._ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE,"axG",@progbits,_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE,comdat
	.weak	_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE
	.type	_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE, @function
_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE:
.LFB2191:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt6chrono8durationIlSt5ratioILl1ELl1000000000EEE5countEv
	movq	%rax, -24(%rbp)
	leaq	-24(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEC1IlvEERKT_
	movq	-16(%rbp), %rax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L90
	call	__stack_chk_fail@PLT
.L90:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2191:
	.size	_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE, .-_ZNSt6chrono20__duration_cast_implINS_8durationIlSt5ratioILl1ELl1000000000EEEES2_ILl1ELl1EElLb1ELb1EE6__castIlS3_EES4_RKNS1_IT_T0_EE
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2333:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L93
	cmpl	$65535, -8(%rbp)
	jne	.L93
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L93:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2333:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z18generateRandosLONGPxi, @function
_GLOBAL__sub_I__Z18generateRandosLONGPxi:
.LFB2334:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2334:
	.size	_GLOBAL__sub_I__Z18generateRandosLONGPxi, .-_GLOBAL__sub_I__Z18generateRandosLONGPxi
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z18generateRandosLONGPxi
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 9.3.0-10ubuntu2) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
