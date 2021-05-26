#include <SFML/Graphics.hpp>

using namespace sf;

void menu(RenderWindow & window) {
	Texture menuTexture1, menuTexture2, menuTexture3, aboutTexture, menuBackground;
	menuTexture1.loadFromFile("images/new_game.png");
	menuTexture2.loadFromFile("images/about_game.png");
	menuTexture3.loadFromFile("images/exit.png");
	aboutTexture.loadFromFile("images/about.png");
	
	menuBackground.loadFromFile("images/background.png");
	Sprite menu1(menuTexture1), menu2(menuTexture2), menu3(menuTexture3), about(aboutTexture), menuBg(menuBackground);
	bool isMenu = 1;
	bool startGame;
	int menuNum = 0;
	bool isFinish = 0;
	void choose_menu();
	menu1.setPosition(25, 30);
	menu2.setPosition(25, 90);
	menu3.setPosition(25, 150);
	menuBg.setPosition(0, 0);
	//////////////////////////////МЕНЮ///////////////////
	while (isMenu)
	{
		menu1.setColor(Color::White);
		menu2.setColor(Color::White);
		menu3.setColor(Color::White);
		menuNum = 0;
		window.clear(Color(129, 181, 221));

		if (IntRect(100, 30, 300, 50).contains(Mouse::getPosition(window))) { menu1.setColor(Color::Blue); menuNum = 1; }
		if (IntRect(100, 90, 300, 50).contains(Mouse::getPosition(window))) { menu2.setColor(Color::Blue); menuNum = 2; }
		if (IntRect(100, 150, 300, 50).contains(Mouse::getPosition(window))) { menu3.setColor(Color::Blue); menuNum = 3; }

		if (Mouse::isButtonPressed(Mouse::Left))
		{
			if (menuNum == 1)
			{
				isMenu = false;//если нажали первую кнопку, то выходим из меню 
				isFinish = false;
				//window.close();
				startGame = true;
			}

			if (menuNum == 2) { window.draw(about); window.display(); while (!Keyboard::isKeyPressed(Keyboard::Escape)); }
			if (menuNum == 3) { window.close(); isMenu = false; }

		}
		choose_menu();

		window.draw(menuBg);
		window.draw(menu1);
		window.draw(menu2);
		window.draw(menu3);

		window.display();
	}
	////////////////////////////////////////////////////
}

void choose_menu()
{
	bool startGame;
	bool isMenu;
	bool isFinish;
	void finish_menu(RenderWindow & window);
	if(finish_menu)
	{
		startGame = false;
		isMenu - true;
	}
	if (menu)
	{
		startGame = false;
		isFinish = false;
	}
}

void finish_menu(RenderWindow & window)
{
	Texture menu2Texture1, menu2Texture2, menu2Texture3, menu2Background;
	menu2Texture1.loadFromFile("images/restart.png");
	menu2Texture2.loadFromFile("images/main.png");
	menu2Texture3.loadFromFile("images/exit.png");
	menu2Background.loadFromFile("images/background.png");
	Sprite menu1(menu2Texture1), menu2(menu2Texture2), menu3(menu2Texture3), menuBg(menu2Background);
	bool isFinish = 1;
	bool isMenu= false;
	int menuNum = 0;
	bool startGame;
	void GameRunning();
	menu1.setPosition(100, 50);
	menu2.setPosition(100, 110);
	menu3.setPosition(100, 170);
	menuBg.setPosition(0, 0);



	while (isFinish)
	{
		menu1.setColor(Color::Red);
		menu2.setColor(Color::Red);
		menu3.setColor(Color::Red);
		menuNum = 0;
		window.clear(Color::Black);

		if (IntRect(100, 50, 300, 50).contains(Mouse::getPosition(window))) { menu1.setColor(Color::Blue); menuNum = 1; }
		if (IntRect(100, 110, 300, 50).contains(Mouse::getPosition(window))) { menu2.setColor(Color::Blue); menuNum = 2; }
		if (IntRect(100, 170, 300, 50).contains(Mouse::getPosition(window))) { menu3.setColor(Color::Blue); menuNum = 3; }

		if (Mouse::isButtonPressed(Mouse::Left))
		{
			if (menuNum == 1)
			{
				//window.close();
				//isMenu = false;	
				//isFinish = false;
				//startGame = true;
				//menu(window);
			}//если нажали первую кнопку, то выходим из меню
			if (menuNum == 2) window.close(); isFinish = false;
			if (menuNum == 3) {
				window.close(); //isFinish = false; startGame = false;
				//isMenu = false;
				
			}

		}

		choose_menu();

		window.draw(menuBg);
		window.draw(menu1);
		window.draw(menu2);
		window.draw(menu3);

		window.display();

	}
}