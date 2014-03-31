# Makefile to build driver program
# --- macros
CC=g++
CFLAGS=  -Wall -g
TEST_OBJ= main.o
#
#
# # --- targets

all:	bits 
bits:   $(TEST_OBJ) 
	$(CC)  -o bits  $(TEST_OBJ) 

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

# --- remove binary and executable files
clean:
	rm -f bits $(TEST_OBJ) 
