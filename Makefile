all: build

build: example.c
	gcc -Wall -std=gnu99 -lcrypto -o test example.c


clean: 
	rm -f test
