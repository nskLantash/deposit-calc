CC = gcc
CFLAGS = -c -Wall -Werror
TFLAGS = -I
OBJ_CATALOG = .build/src/
TEST_OBJ_CATALOG = .build/test/
SOURCES = src/main.c src/deposit.c
OBJECTS = $(SOURCES:.c = $(OBJ_CATALOG)%.o)
TEST_SOURCES = test/main.c test/deposit_test.c src/deposit.c test/validation_test.c
TEST_OBJECTS = $(TEST_SOURCES:.c = $(TEST_OBJ_CATALOG)%.o)
EXEC = bin/calc
TEST = bin/calc_test
#Compile src
all: $(SOURCES) $(EXEC)
	
$(EXEC): $(OBJECTS) 
	$(CC) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

#Compile test
test: $(TEST) $(TEST_SOURCES)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(TEST): $(TEST_OBJECTS)
	$(CC) -I thirdparty $(TEST_OBJECTS) -o $@

	
clean:
	-rm -rf $(EXEC) $(TEST) *~ $(OBJ_CATALOG)*.o *~ $(TEST_OBJ_CATALOG)*.o
