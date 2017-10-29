// cpp_game.cpp : Defines the entry point for the console application.
//

#include "Engine/Engine.h"

#include <iostream>
using namespace std;

int main()
{
	cout << "AWO Engine" << endl;

	Engine engine;

	engine.Initialize("AWO Engine");
	
	while (true) 
	{
		engine.Update();
		engine.Render();
	}

	system("pause");
    return 0;
}

