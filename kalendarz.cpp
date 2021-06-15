#include <iostream>
#include "MData.h"

using namespace std;

int main()
{
    MData m1(12, 5, 2019);

    cout << endl;

    MData m2(32, 3, 2000);

    cout << endl;

    m1.O_dni();
    m1.Show();

    cout << endl;

    m1.O_date(12, 5, 1);
    m1.Show();

    return 0;
}
