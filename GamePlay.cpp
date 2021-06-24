#include "GamePlay.h"
#include <iostream>

int GamePlay::choise(std::string message)
{
	int value;
	bool isInvalid = true;

	while (isInvalid)
	{
		std::cout << message;
		std::cin >> value;
		isInvalid = std::cin.fail() || value < 0 || value > 3 || std::cin.peek() != L'\n';
		if (isInvalid)
		{
			if (std::cin.fail())
				std::cin.clear();

			std::cout << "Значение недопустимо, попробуйте еще раз:" << std::endl;
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	}
	system("cls");
	return value;
}


void GamePlay::Game()
{
	int process;
	std::cout << Game::_introduction;
	process = choise(Game::_firstChoice);

	switch (process)
	{
	case 1:
	{
		std::cout << Game::_firstChoiceAncwer1;
		object.SetParty(true);
		break;
	}
	case 2:
	{
		std::cout << Game::_firstChoiceAncwer2;
		object.SetMax(true);
	}
	case 3:
	{
		std::cout << Game::_firstChoiceAncwer3;
		object.SetMax(true);
	}
	default:
		break;
	}

	std::cout << Game::_secondBlock;

	if (!object.GetMax())
	{
		process = choise(Game::_secondChoice);
		switch (process)
		{
		case 2:
		{
			object.SetArea(true);
			break;
		}
		default:
			std::cout << Game::_secondChoiceSleep;
			break;
		};
	}
	else {
		process = choise(Game::_secondChoiceWithMax);
		switch (process)
		{
		case 1:
		{
			std::cout << Game::_secondChoiceArea;
			object.SetArea(true);
			break;
		}
		case 2:
			std::cout << Game::_secondChoiceSleep;
			object.SetParty(true);
			break;
		default:
			std::cout << Game::_secondChoiceSleep;
			break;
		};

	}
	std::cout << Game::_thirdBlock;
	if (object.GetMax())
		if (object.GetArea())
		{
			std::cout << Game::_thirdBlockWithMaxAndKnowArea;
		}
		else {
			std::cout << Game::_thirdBlockWithMax;
		}
	else{
		if (object.GetArea())
		{
			std::cout << Game::_thirdBlockWithArea;
		}
		else {
			std::cout << Game::_thirdBlockWithoutArea;
		}
	}
	std::cout << Game::_thirdBlockEnd;
	if (!object.GetArea())
	{
		process = choise(Game::_thirdChoice);
		switch (process)
		{
		case 1:
		{
			object.SetPasserby(true);
			break;
		}
		case 2:
		{
			std::cout << Game::_coffe;
			process = choise(Game::_fourChoiceCoffe);
			switch (process)
			{
			case 1:
				std::cout << Game::_answerCoffe + Game::_answerCoffeInfoPVZ +
					Game::_answerCoffeGoodBye;
				object.SetCoffe(true);
				object.SetPvz(true);
				object.SetArea(true);
				object.SetPasserby(true);
				break;
			case 2:
				std::cout << Game::_answerCoffe + Game::_answerCoffeCharge + 
					Game::_answerCoffeGoodBye;
				object.SetArea(true);
				object.SetCoffe(true);
				std::cout << Game::_replicCharge; 
				object.SetPvz(true);
				object.SetPasserby(true);
				break;
			case 3:
				std::cout << Game::_answerCoffeNegative;
				object.SetPasserby(true);
				break;
			}
			break;
		}
		case 3:
		{
			
			object.SetPasserby(true);
			break;
		}
		default:
			break;
		};
	}
	else {
		process = choise(Game::_thirdChoiceWithArea);
		switch (process)
		{
		case 1:
		{

			object.SetPvz(true);
			object.SetPasserby(true);
			break;
		}
		case 2:
		{
			std::cout << Game::_coffe;
			process = choise(Game::_CoffechoiceWithArea);
			switch (process)
			{
			case 1:
				std::cout << Game::_answerCoffe + Game::_answerCoffeGoodBye;
				object.SetCoffe(true);
				object.SetPvz(true);
				object.SetPasserby(true);
				break;
			case 2:
				std::cout << Game::_answerCoffeGoodBye;
				object.SetPvz(true);
				object.SetPasserby(true);
				break;
			case 3:
				std::cout << Game::_answerCoffeNegative;
				object.SetPvz(true);
				object.SetPasserby(true);
				break;
			}
			break;
		}
		case 3:
		{
			object.SetPvz(true);
			object.SetPasserby(true);
			break;
		}
		default:
			break;
		};

	}
		if (!object.GetPVZ())
		{
			process = choise(Game::_mainChoice);
			switch (process)
			{
			default:
				std::cout << Game::_replicPasserby;
				break;
			}
		}
		else {
			process = choise(Game::_mainChoiceArea);
			switch (process)
			{
			case 1:
				std::cout << Game::_replicPasserby2 + Game::_passerbyMoney;
				break;
			case 2:
				std::cout << Game::_replicPasserby2;
				break;
			default:
				std::cout << Game::_refuse;
				break;
			}
		}
		std::cout << Game::_end;
		process = choise(Game::_endChoice);
		switch (process)
		{
		case 1:
			object.SetLive(false);
			break;
		case 2:
			object.SetLive(false);
			break;
		case 3:
			break;
		}
		process = choise(Game::_finalChoice);
		switch (process)
		{
		case 1:
			object.SetLive(false);
			break;
		case 2:
			object.SetLive(true);

			break;
		case 3:
			object.SetLive(false);
			break;
		}

		if (object.GetLive())
		{
			std::cout << Game::_survaved;

			if (object.GetMax())
				if (object.GetArea())
					if (object.GetParty())
						std::cout << Game::_survavedMaks;
					else
						std::cout << Game::_notSurvavedMaks;
				else std::cout << Game::_notSurvavedMaksArea;
			else
				if (object.GetPVZ())
					std::cout << Game::_parselYes;
				else
					std::cout << Game::_parselNo;
		}
		else
		{
			std::cout << Game::_doom;
			if (object.GetMax())
				if (object.GetArea())
					if (object.GetParty())
						std::cout << Game::_survavedMaks2;
					else
						std::cout << Game::_notSurvavedMaks2;
				else std::cout << Game::_notSurvavedMaksArea;
			else
				std::cout << Game::_maybe;
		}
}