
CC ?= gcc
CFLAGS += -std=c99 -Wall -Wextra -Ideps
DEPS := $(wildcard deps/*/*.c)
OBJS := d30act.o $(DEPS:.c=.o)

.DEFAULT_GOAL := validate

test: test.o $(OBJS)

demo: demo.o $(OBJS)

d30act.o: d30act.c d30act.h

deps: package.json
	clib install --dev
	@touch $@

validate: test
	./$<

showcase: demo
	./$<

clean:
	rm -f $(OBJS) d30act.o test.o test demo.o demo

.PHONY: validate showcase clean
