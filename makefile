CC = gcc
CFLAGS = -c
OBJECTS = main.o

app: $(OBJECTS)
	$(CC) $(OBJECTS) -Wall -o app
	
clean:
	rm $(OBJECTS)
	
main.o: main.c
	$(CC) $(CFLAGS) main.c
