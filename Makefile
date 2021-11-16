obj-m:=hello-world.o
KVER = $(shell uname -r)
KSRC = $(shell pwd)

all:
	make -C /lib/modules/$(KVER)/build M=$(KSRC) modules

clean:
	make -C /lib/modules/$(KVER)/build M=$(KSRC) clean