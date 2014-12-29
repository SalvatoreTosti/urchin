CXX = clang++
SDL = -framework SDL2
# If your compiler is a bit older you may need to change -std=c++11 to -std=c++0x
CXXFLAGS = -Wall -c -std=c++11 -I ~/library/Frameworks/SDL2.framework/Headers
LDFLAGS = $(SDL) -F /Library/Frameworks -F ~/Library/Frameworks
EXE = SDL_Lesson0

all: $(EXE)

$(EXE): main.o
		$(CXX) $(LDFLAGS) $< -o $@

main.o: main.cpp
		$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm *.o && rm $(EXE)
