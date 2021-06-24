#pragma once
#include <iostream>

class Game {
private:
	bool _withParty = false;//��� �����, �� ������� ������� ����� ����,
	bool _withMaxim = false;// ��� ������������� � ����������� �� ����, ��� ������ ������������
	bool _isKnowTheArea = false;
	bool _withCoffe = false;
	bool _withPVZ = false;
	bool _isALive = true;

public:
	void SetLive(bool flag); //��������� ��� �������, �� ������� ������ �� ������ �� �������� 
	void SetParty(bool flag);//������ � ������� ������� "��������"
	void SetPvz(bool flag);
	void SetMax(bool flag);
	void SetArea(bool flag);
	void SetCoffe(bool flag);
	void SetPasserby(bool flag);
	bool GetLive();//��������� ��� �������, �� ������� ������ - ������ �� �������� �� ������
	bool GetParty();//������ � ������� "��������"
	bool GetMax();
	bool GetPVZ();
	bool GetArea();
	bool GetCoffe();
	static const std::string _introduction; //� ���� ������� �������� ���� ����� ����
	static const std::string _firstChoice;//� ����������� ������� �� ������ �� ������, �� ��������
	static const std::string _firstChoiceAncwer1;// ��� ��� ����� ��� ����. 
	static const std::string _firstChoiceAncwer2;//��� �����������, ������ ��� �� ����� �� �� ����� ���������
	static const std::string _firstChoiceAncwer3;//�����������, ������ ��� ��� �� ������ ����������.
	static const std::string _secondBlock;
	static const std::string _secondChoiceWithMax;
	static const std::string _secondChoice;
	static const std::string _secondChoiceSleep;
	static const std::string _secondChoiceArea;
	static const std::string _thirdBlock;
	static const std::string _thirdBlockWithMaxAndKnowArea;
	static const std::string _thirdBlockWithMax;
	static const std::string _thirdBlockWithArea;
	static const std::string _thirdBlockWithoutArea;
	static const std::string _thirdBlockEnd;
	static const std::string _thirdChoiceWithArea;
	static const std::string _thirdChoice;
	static const std::string _coffe;
	static const std::string _fourChoiceCoffe;
	static const std::string _CoffechoiceWithArea;
	static const std::string _answerCoffe;
	static const std::string _answerCoffeNegative;
	static const std::string _answerCoffeCharge;
	static const std::string _answerCoffeInfoPVZ;
	static const std::string _answerCoffeGoodBye;
	static const std::string _replicCharge;
	static const std::string _mainChoice;
	static const std::string _mainChoiceArea;
	static const std::string _passerby;
	static const std::string _pvz;
	static const std::string _end;
	static const std::string _endChoice;
	static const std::string _finalChoice;
	static const std::string _replicPasserby;
	static const std::string _replicPasserby2;
	static const std::string _passerbyMoney;
	static const std::string _refuse;
	static const std::string _survaved;
	static const std::string _survavedMaks;
	static const std::string _notSurvavedMaks;
	static const std::string _notSurvavedMaksArea;
	static const std::string _parselYes;
	static const std::string _parselNo;
	static const std::string _doom;
	static const std::string _survavedMaks2;
	static const std::string _notSurvavedMaks2;
	static const std::string _maybe;
};