#! /bin/bash

stack:main.o exitFunc.o init.o mainMenu.o creatStack.o pushElement.o popElement.o searchStack.o destroyStack.o displayStack.o linearSearch.o binarySearch.o
	gcc -o stack main.o exitFunc.o init.o mainMenu.o creatStack.o pushElement.o popElement.o searchStack.o destroyStack.o displayStack.o linearSearch.o binarySearch.o

linearSearch.o:linearSearch.c header.h declaration.h
	gcc -c linearSearch.c
binarySearch.o:binarySearch.c header.h declaration.h
	gcc -c binarySearch.c
displayStack.o:displayStack.c header.h declaration.h
	gcc -c displayStack.c
creatStack.o:creatStack.c header.h declaration.h
	gcc -c creatStack.c
pushElement.o:pushElement.c header.h declaration.h
	gcc -c pushElement.c
popElement.o:popElement.c header.h declaration.h
	gcc -c popElement.c
searchStack.o:main.c header.h declaration.h
	gcc -c searchStack.c
destroyStack.o:destroyStack.c header.h declaration.h
	gcc -c destroyStack.c
main.o:main.c header.h declaration.h
	gcc -c main.c
exitFunc.o:exitFunc.c header.h declaration.h
	gcc -c exitFunc.c
init.o:init.c header.h declaration.h
	gcc -c init.c
mainMenu.o:mainMenu.c header.h declaration.h
	gcc -c mainMenu.c

clean:
	-rm *.o
	-rm stack
