/*
map in C++ is dynamic. That means:
- You don't need to define its size beforehand.
- It can grow or shrink during runtime as you add or remove key-value pairs.
*/
#include <iostream>
#include <map>
using namespace std;


int main()
{

	map<string, int> m;
	int n;

	cout << "Enter the number of items: ";
	cin >> n;

	for(int i = 0; i < n; i++) 
	{
		string key;
		int value;

		cout << "Enter item name (key): ";
		cin >> key;

		cout << "Enter price (value): ";
		cin >> value;

		m[key] = value;
	}
	
    cout << "\nItems and prices: \n";
	for(auto p: m) cout << p.first << " " << p.second << endl;
}
