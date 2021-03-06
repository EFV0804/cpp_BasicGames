#include<SDL.h>
#include<SDL_ttf.h>
#include<SDL_mixer.h>
#include<iostream>
#include"Game.h"
#include<array>
#include<string>
#include<cstdio>
#include<vector>




using std::vector;
using std::array;
using std::string;

int main(int argc, char** argv)
{

	//LOAD
	Game game;
	bool isGameInit = game.initialize();

	//LOOP
	if (isGameInit)
	{
		game.loadScene();
		game.loop();
		game.unload();

	}
	//game.close();

	return 0;
}
