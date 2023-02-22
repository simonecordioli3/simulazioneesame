CC=gcc
CFLAGS=-std=gnu99

all: list_tandem count_even

list_tandem: FORCE
	rm -rf *~ list_tandem
	$(CC) -o list_tandem list_tandem.c list_tandem_main.obj $(CFLAGS)

count_even: FORCE
	rm -rf *~ count_even
	$(CC) -o count_even count_even.c count_even_main.obj $(CFLAGS)

clean:
	rm -rf *~ list_tandem count_even

FORCE: