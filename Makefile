
CC = gcc
PROG := base58id
SRCS := main.c
OBJS := $(SRCS:%.c=%.o)
DEPS := base58.h

$(PROG): $(OBJS)
	$(CC) -Wall -O2 -o $@ $^

%.o: %.c $(DEPS)
	$(CC) -c $<

.PHONY: clean
clean:
	$(RM) $(PROG) $(OBJS) *.d
