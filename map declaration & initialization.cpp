
#include <iostream>
#include <map>
using namespace std;


int main()
{

	map<string, int> m;
	m["laptop"] = 1500;
	m["mobile"] = 500;
	m["charger"] = 200;

	for(auto p: m) cout << p.first << " " << p.second << endl;
} 







