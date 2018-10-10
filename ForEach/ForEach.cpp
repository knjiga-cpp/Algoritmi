#include <iostream>
#include <algorithm>                // definicija predloška for_each()
#include <vector>
using namespace std;

// funkcija koju poziva algoritam for_each:
void Ispisi(double broj)
{
	cout << broj << endl;
}

int main()
{
	vector<double> brojke{ 32423.4534, 7834.62, 2.345, 3.14 };
	for_each(brojke.begin(), brojke.end(), Ispisi);
	return 0;
}
