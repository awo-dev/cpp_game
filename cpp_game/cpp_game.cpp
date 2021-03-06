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
		testSprite.Update();

		//engine.Render();
		engine.BeginRender(); // TODO: Temporary fix

		testSprite.Render();

		engine.EndRender();   // TODO: Temporary fix
	}

	system("pause");
    return 0;
}

