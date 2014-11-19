EXEC1:=rand_uniform
EXEC2:=rand_exp
EXEC3:=rand_normal
EXEC4:=pi
EXEC5:=integral_unbiased
EXEC6:=integral_importance
EXEC7:=mpi_integral_unbiased

SRC1:=$(wildcard *m.c)
SRC2:=$(wildcard *p.c)
SRC3:=$(wildcard *l.c)
SRC4:=$(wildcard *i.c)
SRC5:=$(wildcard *d.c)
SRC6:=$(wildcard *e.c)
SRC7:=$(wildcard *1.c)

OBJ1:=$(patsubst %.c,%.o,$(SRC1))
OBJ2:=$(patsubst %.c,%.o,$(SRC2))
OBJ3:=$(patsubst %.c,%.o,$(SRC3))
OBJ4:=$(patsubst %.c,%.o,$(SRC4))
OBJ5:=$(patsubst %.c,%.o,$(SRC5))
OBJ6:=$(patsubst %.c,%.o,$(SRC6))
OBJ7:=$(patsubst %.c,%.o,$(SRC7))

CC:=gcc
CC2:=mpicc
CFLAGS:=
LDFLAGS:=  
LDLIBS:= -lm

$all: $(EXEC1) $(EXEC2) $(EXEC3) $(EXEC4) $(EXEC5) $(EXEC6) $(EXEC7)

$(EXEC1): $(OBJ1)
	$(CC) $(LDFLAGS) $(LDLIBS) -o $@ $^
$(EXEC2): $(OBJ2)
	$(CC) $(LDFLAGS) $(LDLIBS) -o $@ $^
$(EXEC3): $(OBJ3)
	$(CC) $(LDFLAGS) $(LDLIBS) -o $@ $^
$(EXEC4): $(OBJ4)
	$(CC) $(LDFLAGS) $(LDLIBS) -o $@ $^
$(EXEC5): $(OBJ5)
	$(CC) $(LDFLAGS) $(LDLIBS) -o $@ $^
$(EXEC6): $(OBJ6)
	$(CC) $(LDFLAGS) $(LDLIBS) -o $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c $<
$(EXEC7): $(OBJ7)
	$(CC2) $(LDFLAGS) $(LDLIBS) -o $@ $^
mpi_integral_unbiased1.o: mpi_integral_unbiased1.c
	$(CC2) -O2 -c $<


clean:
	$(RM) $(EXEC1) $(EXEC2) $(EXEC3) $(EXEC4) $(EXEC5) $(EXEC6) $(EXEC7) $(OBJ) *.o



