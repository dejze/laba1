#include "GamePlay.h"
#include <locale>

int main()
{
	setlocale(LC_ALL, "Rus");
	GamePlay Obj;
	Obj.Game();
	system("pause");
	return 0;
}