CC = gcc
CFLAGS = -nostartfiles -O3 -no-pie -static -s -Wl,-T,fixup.ld

random: random.c fixup.ld Makefile
	$(CC) $(CFLAGS) -o $@ $<
