#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;
// funkcijski objekt definiran predloškom:
template<typename Elem>
class MiniMax
{
public:
	MiniMax()
	{
		najmanji = numeric_limits<Elem>::max();
		najveci = numeric_limits<Elem>::min();
	}
	void operator()(const Elem& elem)
	{
		if (elem > najveci)
			najveci = elem;
		if (elem < najmanji)
			najmanji = elem;
	}

	const Elem& Najveci() const {
		return najveci;
	}

	const Elem& Najmanji() const {
		return najmanji;
	}
private:
	Elem najmanji;
	Elem najveci;
};

int main()
{
	int brojevi[]{ 1, 2, 3, 4, 5, 6 };
	MiniMax<int> mm;
	mm = for_each(begin(brojevi), end(brojevi), mm);

	cout << mm.Najmanji() << endl;
	cout << mm.Najveci() << endl;
}
