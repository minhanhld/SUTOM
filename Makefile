# Makefile

CC = gcc
CPPFLAGS = -MMD
CFLAGS = -Wall -Wextra
LDFLAGS =
LDLIBS =

SRC = randomizer.c six_letters.c seven_letters.c eight_letters.c nine_letters.c main.c 

OBJ = ${SRC:.c=.o}
DEP = ${SRC:.c=.d}

main: ${OBJ}

-include ${DEP}

.PHONY: clean

clean:
	${RM} ${OBJ}
	${RM} ${DEP}
	${RM} list/*.gch
	${RM} main


# END
