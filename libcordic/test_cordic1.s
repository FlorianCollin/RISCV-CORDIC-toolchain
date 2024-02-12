	.globl  main
main:
	li t0, 1
	# R-Type Extension Test
	corcos t0, t0
	corsin t0, t0
	cortan t0, t0
	coracos t0, t0
	corasin t0, t0
	coratan t0, t0
	cormul t0, t0, t0
	cordiv  t0, t0, t0
	corln t0, t0
	corexp t0, t0
	# I-Type Extension Test
	corcosi t0, 0
	corsini t0, 0
	cortani t0, 0
	coracosi t0, 0
	corasini t0, 0
	coratani t0, 0
	cormuli t0, t0, 1
	cordivi t0, t0, 1
	ret

