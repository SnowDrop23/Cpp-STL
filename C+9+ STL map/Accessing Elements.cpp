

#include <iostream>
#include <map>
using namespace std;


int main()
{

	map<string, int> m;

	m["laptop"] = 1500;
	m["mobile"] = 500;
	m["charger"] = 200;
	
	//1st way to access
	cout << m.at("mobile") << endl;

  //2nd way to access
  cout << m["mobile'] << endl;

  //3rd way to access
  cout << "\nItems and prices: \n";
	for(auto p: m) cout << p.first << " " << p.second << endl;
} 
