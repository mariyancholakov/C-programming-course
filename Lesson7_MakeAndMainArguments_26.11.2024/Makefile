all: safeadd.exe safesubtract.exe safemultiply.exe safedivide.exe

util.o: util.c util.h
	gcc -c util.c -o util.o

safeint.o: safeint.c safeint.h
	gcc -c safeint.c -o safeint.o

safeadd.exe: safeadd.c safeint.o util.o
	gcc util.o safeint.o safeadd.c -o safeadd.exe

safesubtract.exe: safesubtract.c safeint.o util.o
	gcc util.o safeint.o safesubtract.c -o safesubtract.exe

safemultiply.exe: safemultiply.c safeint.o util.o
	gcc util.o safeint.o safemultiply.c -o safemultiply.exe

safedivide.exe: safedivide.c safeint.o util.o
	gcc util.o safeint.o safedivide.c -o safedivide.exe


clean:
	del *.exe *.o
