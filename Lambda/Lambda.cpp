#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class TablicaPotencija
{
private:
	int pot;
public:
	TablicaPotencija(int potencija) : pot(potencija) { }

	template<typename T>    // definiramo predloškom!
	void Ispisi(vector<T>& br)
	{
		for_each(br.begin(), br.end(),
			[this](T n)     // pogreška: pot nije lokalna var.
		{
			T rezultat = 1;
			for (int i = 1; i <= pot; ++i)
				rezultat *= n;
			cout << n << "^" << pot << "= "
				<< rezultat << endl;
		}
		);
	}
};

int main()
{
	vector<int> n{ 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	for_each(n.begin(), n.end(), [](auto n) { cout << n << endl; });

	vector<int> kvadrati;
	transform(n.begin(), n.end(), back_inserter(kvadrati),
		[](auto n) { return n * n; });

	for_each(n.begin(), n.end(), [](auto& n) { n *= n; });

	vector<int> faktorijel;
	transform(n.begin(), n.end(), back_inserter(faktorijel),
		[](int n)
	{
		int rezultat = 1;
		while (n > 1)
		{
			rezultat *= n;
			--n;
		}
		return rezultat;
	}
	);

	//auto zadnji = remove_if(n.begin(), n.end(),
	//	[=](int n) { return n < min || n > max; });

	//int najveci = numeric_limits<int>::min();
	//for_each(n.begin(), n.end(), [najveci](int n) {
	//	if (n > najveci)
	//		najveci = n; 	// pogreška!
	//}
	//);

	TablicaPotencija tp(5);
	vector<int> v{ 1, 2, 3 };
	tp.Ispisi(v);

	auto kvadriraj = [](auto& n) { n *= n; };

	for_each(n.begin(), n.end(), kvadriraj);
	double d[]{ 1.2, 3.4 };
	for_each(begin(d), end(d), kvadriraj);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
