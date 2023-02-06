#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

// AUfgabe 1: Es werden beim Array die Zahlen gespeichert im gegensatz zum anderen programm
int main()
{
	// A

	/*
	int zahl[10];
	int summe = 0;
	
	for (int i = 0; i < 10; i++)
	{
		cin >> zahl[i];
		summe += zahl[i];
	}
	cout << summe;
	*/


	// B

	/*
	int zahl[10];
	int mittelwert = 0;
	int summe = 0;

		for (int i = 0; i < 10; i++)
		{
			cin >> zahl[i];
			summe += zahl[i];
		}

		mittelwert = summe / 10;

		for (int i = 0; i < 10; i++)
		{
			if (zahl[i] >= mittelwert)
			{
				cout << zahl[i] << endl;
			}
		}

		*/


	// C


	/*
	int zahl[6];
	int eingabe;

	for (int i = 0; i < 6; i++)
	{
		zahl[i] = rand() % 50;
		zahl[i] += 1;
	}

	cin >> eingabe;

	for (int i = 0; i < 6; i++)
	{
		if (zahl[i] == eingabe )
		{
			cout << "gewonnen" << endl << endl;
			eingabe = 100;
		}

		
	}

	if (eingabe != 100)
	{
		cout << "verkackt" << endl << endl;
	}
	*/

	// D



	/*
	string name[10];
	

	for (int i = 0; i < 10; i++)
	{
		cin >> name[i];
	}


	for (int i = 10; i > 0 ; i--)
	{
		cout << name[i] << endl;
	}

	*/

	// E

	string name[10];


	for (int i = 0; i < 10; i++)
	{

		cin >> name[i];
		for (int b = 0; b < 10; b++)
		{

		if (name[i] == name[b])
		{
			i -= 1;
		}

		}
	}




}

