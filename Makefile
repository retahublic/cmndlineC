# Makefile for your C program

# Compiler
CC = clang

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Name of the executable
EXECUTABLE = my_program

all: $(EXECUTABLE)

$(EXECUTABLE): my_program.c
	$(CC) $(CFLAGS) -o $(EXECUTABLE) my_program.c

run: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -f $(EXECUTABLE)

