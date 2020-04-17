all: 1.c 2.c

1.c:
	gcc 1.helloworld.c -o 1

2.c:
	gcc 2.basic-chars.c -o 2

clean:
	rm 1 2

