

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


	// Traversing using iterators
	for(auto i = m.begin(); i != m.end(); i++)
	cout << i->first << " " << (*i).second << endl; //here is two way to access
	
}
