#include <iostream>
#include <string>

using namespace std;

int main()
{
	double nBox, nPrem, nSideLn, nGenAd, pBox, pPrem, pSideLn, pGenAd;
	pBox = 250;
	pPrem = 100;
	pSideLn = 50;
	pGenAd = 25;

	cout << "Please input number of box tickets sold" << endl;
	cin >> nBox;

	cout << "Please input number of premium tickets sold" << endl;
	cin >> nPrem;

	cout << "Please input number of side line tickets sold" << endl;
	cin >> nSideLn;

	cout << "Please input number of general admission tickets sold" << endl;
	cin >> nGenAd;

	cout << "Ticket Price:     Number of Tickets sold:" << endl;
	cout << "250               " << nBox << nBox*pBox << endl;
	cout << "100               " << nPrem << nPrem*pPrem << endl;
	cout << "50                " << nSideLn << nSideLn*pSideLn << endl;
	cout << "25				   " << nGenAd << nGenAd*pGenAd << endl;

	cout << "Total ticket sales = " << nBox + nPrem + nSideLn + nGenAd << endl;

	system("pause");
	return 0;
}