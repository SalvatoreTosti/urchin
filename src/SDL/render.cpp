#include "render.h"

using namespace std;

render::render(){
    SDL_Window* gWindow = NULL;
    SDL_Surface* gScreenSurface = NULL;
    SDL_Surface* gMediaSurface = NULL;
}

render::~render(){}

bool render::init(){
    bool success = true; if(SDL_Init(SDL_INIT_VIDEO) < 0){
        printf("SDL could not initialize! SDL_Error: %s\n",SDL_GetError());
        success = false;
    }
    else {
        gWindow = SDL_CreateWindow("SDL Tutorial",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if(gWindow == NULL){
            printf("Window could not be created! %s\n",SDL_GetError());
            success = false;
        }
        else{ 
            gScreenSurface = SDL_GetWindowSurface(gWindow);
        }
    return success;
    } 
}

bool render::loadMedia(string path){
    bool success = true;
    SDL_Surface* loadSurface = NULL; 
    loadSurface = SDL_LoadBMP(path.c_str());
    gMediaSurface = SDL_ConvertSurface(loadSurface,gScreenSurface->format,NULL);  
    SDL_FreeSurface(loadSurface); 
    if(gMediaSurface == NULL){
        printf("Unable to load image at %s\n",path.c_str());
        printf("SDL Error: %s\n",SDL_GetError());
        success = false;
    }
    return success;
}

void render::close(){
    SDL_FreeSurface(gMediaSurface);
    gMediaSurface = NULL;
    SDL_DestroyWindow(gWindow);
    gWindow = NULL;
}

int render::getScreenWidth(){
    return SCREEN_WIDTH;
}

int render::getScreenHeight(){
    return SCREEN_HEIGHT;
}

SDL_Window* render::getSDLWindow(){
    return gWindow;
}

SDL_Surface* render::getSDLScreenSurface(){
    return gScreenSurface;
}

SDL_Surface* render::getDisplaySurface(){
    return gMediaSurface;
}

SDL_Rect render::getStretchRect(){
    SDL_Rect stretchRect;
    stretchRect.x = 0;
    stretchRect.y = 0;
    stretchRect.w = getScreenWidth();
    stretchRect.h = getScreenHeight();
    return stretchRect;
} 

