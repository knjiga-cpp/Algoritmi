#include <iostream>
#include <algorithm>                // definicija predloška count_if()

using namespace std;

// funkcija koju poziva algoritam count_if:
bool JeLiParan(int broj)
{
	return broj % 2 == 0;
}

int main()
{
	int brojevi[]{ 1, 2, 3, 4, 5, 6 };
	int parnih = count_if(cbegin(brojevi), cend(brojevi), JeLiParan);
	// ispišimo rezultat:
	cout << parnih << " parnih brojeva" << endl;
	return 0;
}
