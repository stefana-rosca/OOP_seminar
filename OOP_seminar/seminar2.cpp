#include <iostream>
#include "aufgabe6.h"
#include "seminar2.h"
using namespace std;

int main()
{
	cout << "AUFGABE 1\n";
	char v[100] = "ana";
	char w[100] = "stefana are patru ananasi";
	char* search = strfind(v, w);
	cout << search;

	cout << "\n\nAUFGABE 2\n\n";
	ex2();

	cout << "\n\nAUFGABE 4\n";
	char a[10] = "QWERTY";
	cout << strlen(a) << endl;
	cout <<strcpy(v, w);

	cout << "\n\nAUFGABE 6\n";

	Account BT;
	BT.istoric();
	//BT.bezahlen(30);
	//BT.bezahlen(90);
	//BT.sold_disponibil();
	BT.einzahlung(90);
	BT.bezahlen(30);
	BT.sold();
}