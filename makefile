all:
	gcc $(shell find . -name "*.c") -o out/amm -g
	./out/amm