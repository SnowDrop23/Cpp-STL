
#include <iostream>
#include <unordered_map>
using namespace std;


int main()
{

	unordered_map<string, int> m;

	m.emplace("Tv", 1000);
	m.emplace("Fridge", 1400);
	m.emplace("Pan", 420);
	m.emplace("Oven", 750);
	m.insert(make_pair("Cooker", 660));

	//finding element
	if(m.find("Pan") != m.end()) cout << "Found!\n";
	else cout << "Not found!\n";

	//removing key
	auto it = m.find("Pan");
	if(it != m.end())
	{
		cout << it->first << " deleted from the list." << endl;
		m.erase("Pan");
	}
	cout << "Number of element stored in unordered map: " << m.size() << endl;


    cout << "\nItems and prices: \n";
	cout << "\n[Ranged-based for loop output]\n";
	for(auto p: m) cout << p.first << " " << p.second << endl;
	
	//Traversing using iterators
	cout << "\n[Iterator-based loop output]\n";
	for(auto i = m.begin(); i != m.end(); i++)
	cout << i->first << " " << (*i).second << endl;

	//removing all keys with values
	m.clear();
	if(m.empty() == true) cout << "Map is empty now!\n";
	else cout << "\nMap is not empty!\n";
 	
}
