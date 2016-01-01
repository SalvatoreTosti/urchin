#OSX environment variables
CXX = clang++
SDL = -framework SDL2
CXXFLAGS = -Wall -c -std=c++11 -I ~/library/Frameworks/SDL2.framework/Headers
LDFLAGS = $(SDL) -F /Library/Frameworks -F ~/Library/Frameworks
EXE = SDL_main

#Ubuntu enviornment variables
CC = g++
CCFLAGS = -w
OBJS = main.cpp render.o
LKFLAGS = -lSDL2
OBJNAME = SDL_main

TORM = *.o SDL_main

#linux compile prefered

linux: $(OBJS)
	$(CC) $(OBJS) $(CCFLAGS) $(LKFLAGS) -o $(OBJNAME)

render.o: render.cpp render.h
	$(CC) $(CCFLAGS) $(LKFLAGS) -c render.cpp

mac: $(EXE)

$(EXE): main.o
		$(CXX) $(LDFLAGS) $< -o $@

main.o: main.cpp 
		$(CXX) $(CXXFLAGS) $< -o $@
clean:
	rm -f ${TORM} 

