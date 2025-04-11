// They are Dynamic Containers, values can be added or deleted beyond initial size.
#include <iostream>
#include <map>
using namespace std;


int main()
{

	multimap<string, int> m;

	m.emplace("pen", 10);
	m.emplace("pen", 14);
	m.insert(pair <string, int> ("pencil", 20)); //two ways of initializing multimap
	
	m.emplace("pencil", 30); // we can initialize same key with multiple times in multimap, its valid

	m.insert(pair<string, int> ("book", 120)); //inserting a pair

	//finding element
	if((m.find("pencil") != m.end())) cout << "Found!\n";
	else cout << "Not found!\n";
	
	//removing key
	m.erase("pencil");

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
	else cout << "Not empty.";
	
}
