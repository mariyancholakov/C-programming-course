
all: help.exe strlength.exe strconcat.exe strcompare.exe

help.exe: help.c mystrings.o
	gcc help.c -o help.exe mystrings.o 

strlength.exe: strlength.c mystrings.o
	gcc strlength.c -o strlength.exe mystrings.o

strconcat.exe: strconcat.c mystrings.o
	gcc strconcat.c -o strconcat.exe mystrings.o

strcompare.exe: strcompare.c mystrings.o
	gcc strcompare.c -o strcompare.exe mystrings.o

mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c -o mystrings.o

clean:
	del *.o *.exe


