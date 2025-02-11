all: main.exe

main.exe: main.c quadraticroots.o
	gcc quadraticroots.o main.c -lm -o main.exe

quadraticroots.o: quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c -o quadraticroots.o

clean: 
	del *.exe *.o