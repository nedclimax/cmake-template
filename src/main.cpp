#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

int main(int argc, char **argv) {
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window *window = SDL_CreateWindow("B2A3IG", 1280, 720, SDL_WINDOW_HIGH_PIXEL_DENSITY|SDL_WINDOW_OPENGL);
	bool running = true;
	while (running) {
		SDL_Event e = {};
		while (SDL_PollEvent(&e)) {
			if (e.type == SDL_EVENT_QUIT) {
				running = false;
			}
		}
	}
	SDL_Quit();
	return 0;
}