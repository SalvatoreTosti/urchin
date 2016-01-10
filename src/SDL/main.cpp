#include <SDL2/SDL.h>
//#include <sdl.h> //<SDL2/SDL.h> equivalent for OSX
#include <stdio.h>
#include "render.h"

using namespace std;

/* render logic based on lazyfoo.net/tutorials/SDL/03_event_driven_programming/index.php */
 
int main( int argc, char* args[]){
    render render;
    if(!render.init()){ 
        printf("Failed to initialize.\n");
    }
    else {
        //do nothing
    }
    if(!render.loadMedia("hello.bmp")){
        printf("Failed to load media.\n");
    }
    else {
        //do nothing
    }
    
    bool quit = false;
    SDL_Event e;
    while( !quit ){
        while( SDL_PollEvent( &e ) != 0){
            if( e.type == SDL_QUIT ){
                quit = true;
            }    
            else if(e.type == SDL_KEYDOWN) {
                switch(e.key.keysym.sym){
                case SDLK_UP:
                    render.loadMedia("hello.bmp"); 
                    break; 
                case SDLK_DOWN:
                    render.loadMedia("helloInvert.bmp"); 
                    break;
                case SDLK_LEFT:
                    break;
                case SDLK_RIGHT:
                    break;
                default:
                    break; 
                }
            } 
            else{
            //do nothing
            }
        } 

        SDL_Rect stretchRect = render.getStretchRect(); 
        SDL_BlitScaled( render.getDisplaySurface(), NULL, render.getSDLScreenSurface(), &stretchRect); 
        SDL_UpdateWindowSurface(render.getSDLWindow());
    } 
    render.close();
    return 0;
}
