
program: the_source.c
	gcc -o program the_source.c

run: program
	./program

clean:
	rm -v ./program

