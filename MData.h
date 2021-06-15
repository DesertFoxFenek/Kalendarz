#pragma once
#include <iostream>
using namespace std;

class MData
{
	int dzien, miesiac, rok;
	int dzien_z, miesiac_z, rok_z;
	int dd, mm, rrrr;

	int miesiace[12][2] = {
		{1,31},
		{2,28},
		{3,31},
		{4,30},
		{5,31},
		{6,30},
		{7,31},
		{8,30},
		{9,31},
		{10,30},
		{11,31},
		{12,30},
	};

public:

	MData(int dzien, int miesiac, int rok)
	{
		bool wartosc = false;
		if ((miesiac > 0) && (miesiac < 13))
		{
			for (int i = 0; i < 12; i++)
			{
				if (miesiace[i][0] == miesiac)
				{
					if (miesiace[i][1] >= dzien)
					{
						wartosc = true;

						this->dzien = dzien;
						this->miesiac = miesiac;
						this->rok = rok;

						this->dzien_z = dzien;
						this->miesiac_z = miesiac;
						this->rok_z = rok;

						cout << "Data zostala wprowadzona poprawnie i zapisana" << endl;

						break;
					}
				}
			}
		}

		if(wartosc == false)
		{
			this->dzien = 0;
			this->miesiac = 0;
			this->rok = 0;

			cout << "Zapisana data zostala wyzerowan ze wzgledu na blad w jej wartosci." << endl;
		}
	}

	void O_dni();
	void Show();
	void O_date(int dd, int mm, int rrrr);
};