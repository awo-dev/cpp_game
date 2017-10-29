// cpp_game.cpp : Defines the entry point for the console application.
//

#include "Engine/Engine.h"
#include "Engine/Graphics/Sprite.h"

#include <iostream>
using namespace std;

int main()
{
	cout << "AWO Engine" << endl;

	Engine engine;
	engine.Initialize("AWO Engine");

	Sprite testSprite = Sprite("Assets/Art/test_sprite.png", 100, 100);
	
	while (true) 
	{
		engine.Update();
		//engine.Render();

		testSprite.Update();

		engine.BeginRender();

		testSprite.Render();

		engine.EndRender();
	}

	system("pause");
    return 0;
}

