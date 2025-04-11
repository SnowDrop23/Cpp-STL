
#include <iostream>
#include <map>
using namespace std;


int main()
{

	map<string, int> m;

	m["laptop"] = 1500;
	m["mobile"] = 500;
	m["charger"] = 200;
	
	m["charger"] = 570; // Updating Elements, keys cant be changed once added tp the map.

	m.insert(pair<string, int> ("watch", 780)); //inserting a pair

	//finding element
	if((m.find("mobile") != m.end())) cout << "Found!\n";
	else cout << "Not found!\n";
	
	//removing key
	m.erase("mobile");

	//size of the map
	cout << "Number of elements stored in map: " << m.size() << endl;

    cout << "\nItems and prices: \n";
	cout << "\n[Range-based for loop output]\n";
	for(auto p: m) cout << p.first << " " << p.second << endl;

	// Traversing using iterators
	cout << "\n[Iterator-based loop output]\n";
	for(auto i = m.begin(); i != m.end(); i++)
	cout << i->first << " " << (*i).second << endl; //here is two way to access

	m.clear();
	if(m.empty() == true) cout << "Map is empty now!";
	
}
