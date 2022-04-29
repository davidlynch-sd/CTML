CC=gcc

compile:
	$(CC) -o bin/main src/main.c
run:
	./bin/main demo.html src/demo.ctml

both:
	$(CC) -o bin/main src/main.c
	./bin/main demo.html src/demo.ctml
