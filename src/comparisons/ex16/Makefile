
DUMADIR=../..
CFLAGS=-g -O0 -I$(DUMADIR) -include stdlib.h -include duma.h
LFLAGS=$(DUMADIR)/libduma.a
ifeq ($(OS), Windows_NT)
  LIBS=
else
  LIBS=-lpthread
endif

CC=gcc
CXX=g++

BIN=leak2
OBJ=$(BIN).o

all: $(BIN)
	./$(BIN)

clean:
	- rm -f $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CC) $(OBJ) $(LFLAGS) $(LIBS) -o $(BIN)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

