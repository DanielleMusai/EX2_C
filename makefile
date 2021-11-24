CC=gcc
OBJECT=my_mat.o  main.o
NAME = connections
CFLAGS = -Wall  -g

all : $(OBJECT)
	$(CC) $(OBJECT) -o $(NAME)

my_mat.o: my_mat.c my_mat.h
main.o: main.c my_mat.h

.PHONY = all clean

clean:
	rm -f *.o *.a *.so my_mat main
	
