main: main.o 
	gcc main.o hello.o printNumber.o -o main
main.o: main.c hello.o printNumber.o lab04.h
	gcc -c main.c
hello.o: hello.c lab04.h
	gcc -c hello.c
printNumber.o: printNumber.c lab04.h
	gcc -c printNumber.c
clean:
	rm main.o hello.o printNumber.o
