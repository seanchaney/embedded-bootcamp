# variables
CC = cc
CFLAGS = -Wall -Wextra -pedantic

# The default target (running just 'make' triggers this)
all: hello

# Target to compile the executable
hello: hello.c
	$(CC) $(CFLAGS) hello.c -o hello

# Target to clean up the directory
clean:
	rm -f hello
