CC = gcc
CFLAGS = -c -Wall -Werror
TFLAGS = -I
OBJ_CATALOG = .build/src/
SOURCES = src/main.c src/deposit.c
OBJECTS = $(SOURCES:.c = $(OBJ_CATALOG)%.o)
EXEC = bin/calc
#Compile src
all: $(SOURCES) $(EXEC)
	
$(EXEC): $(OBJECTS) 
	$(CC) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@
	
clean:
	-rm -rf $(EXEC) *~ $(OBJ_CATALOG)*.o
