#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> igraci{ "Dora", "Matej", "Antun", "Neven", "Mirta" };
	sort(igraci.begin(), igraci.end());

	for (const auto& ime : igraci)
		cout << ime << endl;
	return 0;
}
