
.PHONY: all

all: supersort.o
	@echo "compiling ..."
	@gcc supersort.o -o supersort
	./supersort 20

supersort.o:
	@gcc -c main.c -o $@
