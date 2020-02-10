src = \
	src/value.c \
	src/vm.c \
    src/main.c

obj = $(src:.c=.o)

CCFLAGS = -Wall

lvm: $(obj)
	$(CC) $(CCFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -f $(obj) lvm
