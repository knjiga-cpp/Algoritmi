#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int brojevi[]{ 1, -2, 3, -4, -5, 6 };
	transform(begin(brojevi), end(brojevi), brojevi,
		static_cast<int(*)(int)>(abs));

	for (auto br : brojevi)
		cout << br << endl;
	return 0;
}
