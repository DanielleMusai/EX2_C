CC=gcc
OBJECT=my_mat.o  main.o
NAME_= connections
CFLAGS = -Wall -g

all : $(OBJECT)
	$(CC) $(OBJECT) -o $(NAME_)

my_mat.o: my_mat.c my_mat.h
main.o: main.c my_mat.h

.PHONY = clean all

clean:
	rm -f *.o *.a *.so connections
	
