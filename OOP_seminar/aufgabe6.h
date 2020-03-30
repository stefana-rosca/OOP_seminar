#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Account
{
private:

	double bani = 100;

public:

	void bezahlen(const double& betrag)
	{
		bani -= betrag;

		fstream fis;
		fstream fis2;

		fis.open("date-out.txt", ios::app);
		fis2.open("geld.txt", ios::app);

		fis << "OUT " << betrag << " " << bani << '\n';
		fis2 << bani << '\n';

		fis.close();
		fis2.close();
	}

	void einzahlung(const double& betrag)
	{
		bani += betrag;

		fstream fis;
		fstream fis2;

		fis.open("date-out.txt", ios::app);
		fis2.open("geld.txt", ios::app);

		fis << "IN " << betrag << " " << bani << '\n';
		fis2 << bani << '\n';

		fis.close();
		fis2.close();
	}

	void sold()
	{
		cout << "Sold: " << bani;
	}

	void istoric()
	{

		ifstream myReadFile;
		myReadFile.open("date-out.txt");

		int var=0;
		char output[100];
		if (myReadFile.is_open())
			while (!myReadFile.eof())
			{
				myReadFile >> output;
				if (atoi(output) > 0)
					var = atoi(output);
			}

		bani = var;
		myReadFile.close();
	}
};