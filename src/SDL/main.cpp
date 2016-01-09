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
    if(!render.loadMedia()){
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
        
        SDL_BlitSurface( render.getDisplaySurface(), NULL, render.getSDLScreenSurface(), NULL );
        SDL_UpdateWindowSurface(render.getSDLWindow());
    } 
    render.close();
    return 0;
}


//render proof of concept
/*
int main( int argc, char* args[]){
    render render; 
    if(!render.init()){ printf("Failed to initialize!\n");}
    else{
        if(!render.loadMedia()){printf("Failed to load media\n");}
        else{ SDL_BlitSurface(render.getDisplaySurface(),NULL,render.getSDLScreenSurface(),NULL);
        SDL_UpdateWindowSurface(render.getSDLWindow());
        SDL_Delay(2000);
        }
    }
    render.close();
    return 0;
}
*/
