CC          =	gcc

# Flags that are sent to the compiler
CFLAGS      =	-Wall -ansi -pedantic -g

#Directories where the compiler can find things
INCLUDES    = -Iinclude

BINDIR = bin/
SRCDIR = src/

SOURCE = $(SRCDIR)linkedList.c $(SRCDIR)main.c

OBJS    = linkedList.o main.o

#The names of the binary programs that will be produced.  
PROGNAME = $(BINDIR)mainrunnable


default : link

link: compile
	$(CC) -o $(PROGNAME) $(OBJS)

compile: 
	$(CC) $(CFLAGS) -c $(SOURCE) $(INCLUDES)

clean:
	@ rm *.o
	
run:
	cd bin; ./mainrunnable
