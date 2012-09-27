.PHONY: clean
LDFLAGS = -lpcap -lnet
CFLAGS = -Wall

tcpkill: pcaputil.o tcpkill.c
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

clean:
	rm -f pcaputil.o tcpkill
