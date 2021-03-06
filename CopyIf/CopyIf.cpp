#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

// funkcija koju će pozivati copy_if():
bool JeLiParan(int broj)
{
	return broj % 2 == 0;
}

int main()
{
	int brojke[]{ 1, 2, 3, 4, 5, 6 };
	// za izlazni vektor moramo rezervirati dovoljni prostor:
	//vector<int> parni(end(brojke) - begin(brojke));
	//auto it = copy_if(begin(brojke), end(brojke), parni.begin(),
	//	JeLiParan);
	//// smanjimo izlazni niz upravo na broj preslikanih brojeva:
	//parni.resize(distance(parni.begin(), it));

	vector<int> parni;
	auto it = copy_if(begin(brojke), end(brojke),
		back_inserter(parni), JeLiParan);

	for (const auto& br : parni)
		cout << br << endl;
	return 0;
}
