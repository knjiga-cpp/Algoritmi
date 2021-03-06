#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool CroManji(const string& prvi, const string& drugi)
{
	return (strcoll(prvi.c_str(), drugi.c_str()) < 0);
}

int main()
{
	vector<string> igraci{ "Dora", "Matej", "Antun", "Neven", "Mirta",
						  "Šimun", "Tomo", "Ljubo", "Luka"};

    setlocale(LC_COLLATE, "croatian");
	// na Linuxu bi trebalo proći s:
	// setlocale(LC_COLLATE, "hr_HR.utf-8");
	sort(igraci.begin(), igraci.end(), CroManji);

	for (const auto& ime : igraci)
		cout << ime << endl;
	return 0;
}
