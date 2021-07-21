all: main

main: main.c calculate.c
	gcc -o main main.c calculate.c 
	
clear:
	rm main.c~ makefile~ calculate.c~
