/* render.h */

#ifndef RENDER_H
#define RENDER_H

#include <SDL2/SDL.h>
#include <string>
using namespace std;

class render {
public:
    render();
    ~render();
    bool init();
    bool loadMedia();
    bool loadMedia(string); 
    void close();

    
    SDL_Window* getSDLWindow();
    SDL_Surface* getSDLScreenSurface();
    SDL_Surface* getDisplaySurface();
private:
    static const int SCREEN_WIDTH = 640; 
    static const int SCREEN_HEIGHT = 480;
    
    SDL_Window* gWindow;
    SDL_Surface* gScreenSurface;
    SDL_Surface* gMediaSurface;
     
};
#endif
