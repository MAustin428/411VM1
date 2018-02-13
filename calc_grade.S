/* YOUR FILE-HEADER COMMENT HERE */

	.section .text
	.globl calc_grade

calc_grade:
	/* PART 5: YOUR ASSEMBLY CODE HERE */

	mov w1, 'A'
	cmp w0, #90
	bge end
	mov w1, 'B'
	cmp w0, #80
	bge end
	mov w1, 'C'
	cmp w0, #70
	bge end
	mov w1, 'D'
	cmp w0, #60
	bge end
	mov w1, 'F'

end:
	mov w0, w1
	ret
