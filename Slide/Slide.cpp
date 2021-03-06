#include <iostream>
#include <algorithm>

using namespace std;

template <typename It>
pair<It, It> slide(It prvi, It zadnji, It poz)
{
	if (poz < prvi) 
		return { poz, rotate(poz, prvi, zadnji) };
	if (zadnji < poz) 
		return { rotate(prvi, zadnji, poz), poz };
	return { prvi, zadnji };
}

int main()
{
	int brojevi[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	slide(brojevi + 2, brojevi + 4, brojevi + 7);
}
