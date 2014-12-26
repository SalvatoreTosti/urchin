
TORM = test
CC = g++
CCFLAGS = -g -O3 -Wall -Wpointer-arith -Wcast-qual -Wwrite-strings
SOURCE_CODE_DIR = ../src/
OBJECT_FILES = ../src/terrain.o ../src/unit.o ../src/tile.o ../src/terrain_factory.o ../src/unit_factory.o
unit-test: 
	cd ${SOURCE_CODE_DIR} ; make all
	g++ -o test test_main.cpp ${OBJECT_FILES}

clean:
	cd ../src/ ; make clean
	rm -f ${TORM} 
