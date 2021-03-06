#include <SDL.h>

int main(int argc, char **argv)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	
	//Tell SDL to be forward compatible with OpenGL 3.2 context
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);

	//Create a window
	SDL_Window *window = SDL_CreateWindow("OpenGL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL);

	//Create OpenGL context
	SDL_GLContext context = SDL_GL_CreateContext(window);

	//The event Loop
	SDL_Event windowEvent;
	while(true) {
		if( SDL_PollEvent(&windowEvent) ) {
			if(windowEvent.type == SDL_QUIT) {
				break;
			}
		}

	//	SDL_GL_SwapWindow(window);		
	}

	SDL_GL_DeleteContext(context);
	SDL_Quit();
	return 0;
}
