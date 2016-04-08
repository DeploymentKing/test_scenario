all: build

build: example.c
	gcc -Wall -std=gnu99 -o test example.c -lcrypto 


clean: 
	rm -f test
