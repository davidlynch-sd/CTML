CC=gcc

hello:
	echo "hello make"

compile:
	$(CC) -o bin/main src/main.c
run:
	./bin/main

both:
	$(CC) -o bin/main src/main.c
	./bin/main
