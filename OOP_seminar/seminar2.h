#pragma once
#include <string>
#include <iostream>
#include<fstream>
using namespace std;
//2
char* strfind(const char* s, const char* f)
{
    int i = 0;
    while (i < strlen(f))
    {
        int j = 0;
        int aux = i;
        while (f[i] == s[j] && j < strlen(s))
        {
            j++;
            i++;
        }
        if (j == strlen(s))
        {
            return const_cast<char*>(&f[aux]);
        }
        i++;
    }
    return NULL;
}

//a)minim
struct min
{
    bool ok;
    int n;
    char* s = new char[100];
    long b;
    double c;
    long double d;
}minim;

//b)maxim
struct max
{
    bool ok = true;
    int a = 100;
    char s[100];
    long b;
    double c = 4.20;
    long double d;
}maxim;

void ex2()
{
    min elem;
    max elem2;
    cout << "a) so klein wie möglich: " << sizeof(minim);
    cout << "\nb) so groß wie möglich " << sizeof(maxim);
}

//4)
int strlen(char* s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

char* strcpy(char* s, char* p)
{
    int i = 0;
    do
    {
        p[i++] = s[i];
    } while (s[i] != '\0');

    return p;
}

//6)
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

		int var = 0;
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