
TORM = *.o
CC = g++
CCFLAGS = -g -O3 -Wall -Wpointer-arith -Wcast-qual -Wwrite-strings

COMPONENT_DIR = components
FACTORY_DIR = factories

all: factories main

main: main.o
	${CC} ${CCFLAGS} -o main main.o unit.o terrain.o tile.o

factories: terrain_factory.o unit_factory.o tile_factory.o

terrain_factory.o: terrain.o ${COMPONENT_DIR}/terrain.h
	${CC} ${CCFLAGS} -c ${FACTORY_DIR}/terrain_factory.cpp

unit_factory.o: unit.o ${COMPONENT_DIR}/unit.h
	${CC} ${CCFLAGS} -c ${FACTORY_DIR}/unit_factory.cpp

tile_factory.o: tile.o ${COMPONENT_DIR}/tile.h
	${CC} ${CCFLAGS} -c ${FACTORY_DIR}/tile_factory.cpp

main.o: main.cpp unit.o terrain.o tile.o
	${CC} ${CCFLAGS} -c main.cpp

tile.o: unit.o terrain.o
	${CC} ${CCFLAGS} -c ${COMPONENT_DIR}/tile.cpp

unit.o:	${COMPONENT_DIR}/unit.cpp ${COMPONENT_DIR}/unit.h
	${CC} ${CCFLAGS} -c ${COMPONENT_DIR}/unit.cpp
	
terrain.o:  ${COMPONENT_DIR}/terrain.cpp ${COMPONENT_DIR}/terrain.h
	${CC} ${CCFLAGS} -c ${COMPONENT_DIR}/terrain.cpp
	
clean:
	rm -f ${TORM} 
