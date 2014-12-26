
TORM = terrain.o unit.o tile.o terrain_factory.o unit_factory.o tile_factory.o  main main.o
CC = g++
CCFLAGS = -g -O3 -Wall -Wpointer-arith -Wcast-qual -Wwrite-strings

all: factories main

main: main.o
	${CC} ${CCFLAGS} -o main main.o unit.o terrain.o tile.o

factories: terrain_factory.o unit_factory.o tile_factory.o

terrain_factory.o: terrain.o terrain.h
	${CC} ${CCFLAGS} -c terrain_factory.cpp

unit_factory.o: unit.o unit.h
	${CC} ${CCFLAGS} -c unit_factory.cpp

tile_factory.o: tile.o tile.h
	${CC} ${CCFLAGS} -c tile_factory.cpp

main.o: main.cpp unit.o terrain.o tile.o
	${CC} ${CCFLAGS} -c main.cpp

tile.o: unit.o terrain.o
	${CC} ${CCFLAGS} -c tile.cpp

unit.o:	unit.cpp unit.h
	${CC} ${CCFLAGS} -c unit.cpp
	
terrain.o:  terrain.cpp terrain.h
	${CC} ${CCFLAGS} -c terrain.cpp
	
clean:
	rm -f ${TORM} 
