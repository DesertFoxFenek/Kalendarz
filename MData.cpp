#include "MData.h"

void MData::O_dni()
{
	int ilosc_dni;

	cout << "Podaj wartosc o ile dni chcesz zmienic date? ";
	cin >> ilosc_dni;

	for (int i = 0; i < ilosc_dni; i++)
	{
		if (dzien == (miesiace[miesiac - 1][1]))
		{
			dzien = 0;
			miesiac += 1;

			if (miesiac == 13)
			{
				miesiac = 1;
				rok += 1;
			}
		}

		dzien += 1;
	}
}

void MData::Show()
{
	cout << "Zapisana data przed zmianami: " << endl;
	cout << dzien_z << "-" << miesiac_z << "-" << rok_z << endl;

	cout << "Zapisana data po zmianach: " << endl;
	cout << dzien << "-" << miesiac << "-" << rok << endl;
}

void MData::O_date(int dd, int mm, int rrrr)
{
	int r = 0;

	dzien = dzien_z;
	miesiac = miesiac_z;
	rok = rok_z;

	for (int i = 0; i < dd; i++)
	{
		if (miesiace[miesiac + r - 1][1] == dzien)
		{
			mm += 1;
			r++;
			dzien = 0;
		}
		dzien += 1;
	}

	r = 0;

	for (int i = 0; i < mm; i++)
	{
		if (miesiac < 12) miesiac += 1;
		else
		{
			miesiac = 0;
			r++;
		}
	}

	rok += rrrr + r;
}
