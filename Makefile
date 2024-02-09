CC     = gcc
LIBS   = lib
CFLAGS = -g -Wall -pedantic -std=c11
FILES  = $(wildcard src/*.c)
OUT    = out

all:
	$(CC) main.c $(FILES) -o $(OUT) -I $(LIBS) $(CFLAGS)
	./$(OUT)


compile:
	$(CC) $(FILES) -o $(OUT) -I $(LIBS) $(CFLAGS)

run:
	./$(OUT)

clean:
	rm -rf $(OUT)
