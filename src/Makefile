
TORM = terrain.o unit.o tile.o
CC = g++
CCFLAGS = -g -O3 -Wall -Wpointer-arith -Wcast-qual -Wwrite-strings

main: main.o
	${CC} ${CCFLAGS} -o main main.o unit.o terrain.o

main.o: main.cpp unit.o terrain.o
	${CC} ${CCFLAGS} -c main.cpp

unit.o:	unit.cpp unit.h
	${CC} ${CCFLAGS} -c unit.cpp
	
terrain.o:  terrain.cpp terrain.h
	${CC} ${CCFLAGS} -c terrain.cpp
	
clean:
	rm -f ${TORM} 
