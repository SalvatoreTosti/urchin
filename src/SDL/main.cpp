#include <SDL2/SDL.h>
//#include <sdl.h> //<SDL2/SDL.h> equivalent for OSX
#include <stdio.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

SDL_Window* gWindow = NULL;
SDL_Surface* gScreenSurface = NULL;
SDL_Surface* gHelloWorld = NULL;

bool init();
bool loadMedia();
void close();

int main( int argc, char* args[]){
    if(!init()){ printf("Failed to initialize!\n");}
    else{
        if(!loadMedia()){printf("Failed to load media\n");}
        else{ SDL_BlitSurface(gHelloWorld,NULL,gScreenSurface,NULL);
        SDL_UpdateWindowSurface(gWindow);
        SDL_Delay(2000);
        }
    }
    close();
    return 0;
}

bool init(){
    bool success = true;
    if (SDL_Init(SDL_INIT_VIDEO) <0){
        printf("SDL could not initialize! SDL_Error: %s\n",SDL_GetError());
    success = false;}
    else{
        gWindow = SDL_CreateWindow("SDL Tutorial",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if(gWindow == NULL){
            printf("Window could not be created! %s\n",SDL_GetError());
            success = false;}
        else{gScreenSurface = SDL_GetWindowSurface(gWindow);}
    return success;}
}

bool loadMedia(){
    bool success = true;
    gHelloWorld= SDL_LoadBMP("hello.bmp");
    if(gHelloWorld == NULL){
        printf("Unable to load image. SDL Error: %s\n",SDL_GetError());
        success = false;}
    return success;}

void close(){
    SDL_FreeSurface(gHelloWorld);
    gHelloWorld = NULL;
    
    SDL_DestroyWindow(gWindow);
    gWindow = NULL;

    SDL_Quit();} 
