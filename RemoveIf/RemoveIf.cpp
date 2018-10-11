#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    vector<int> brojke{ 1, 2, 3, 4, 5, 6, 7, 8 };
    remove_if(brojke.begin(), brojke.end(), [](auto n) { return n % 2 == 0; });
    return 0;
}
