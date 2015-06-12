#sample Makefile

CC		:=gcc
OUTP	=-o $@
CFLAGS	:=-c


SRCD	:=mysys_src
OBJD	:=obj
BIND	:=bin

SRCF	:= $(wildcard $(SRCD)/*.c)
OBJF	:= $(patsubst $(SRCD)/%,$(OBJD)/%,$(patsubst %.c,%.o,$SRCF))


TAROT	:=$(BIND)/mylist.exe

TARGET	:=$(TAROT)
 
all:$(TARGET)
	

$(TAROT):$(OBJF)
	$(CC) $^ $(OUTP)

###############################################
$(OBJD)/%.o:$(SRCD)/%.c
	$(CC) $(CFLAGS) $< $(OUTP)

