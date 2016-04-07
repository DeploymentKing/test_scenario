all: build

build: example.c
	gcc -Wall -lcrypto -o test example.c


clean: 
	rm -f test
