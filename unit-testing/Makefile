
TORM = unit-test unit-test.o
CC = g++
CCFLAGS = -g -O3 -Wall -Wpointer-arith -Wcast-qual -Wwrite-strings
SOURCE_CODE_DIR = ../src/
OBJECT_FILES = ../src/terrain.o ../src/unit.o ../src/tile.o

unit-test: 
	cd ${SOURCE_CODE_DIR} ; make main.o
	g++ test-main.cpp ${OBJECT_FILES}

clean:
	rm -f ${TORM} 
