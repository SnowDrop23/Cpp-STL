
#include <iostream>
#include <set>
using namespace std;


int main()
{
	set<int> s;

	s.insert(5);
	s.insert(15);
	s.insert(9);
	s.insert(1);
	s.insert(12);
	s.insert(17);

	auto lb = s.lower_bound(7);
	auto ub = s.upper_bound(11);

	if(lb != s.end()) cout << "Lower bound of 7 is " << *lb << endl;
	else cout << "Lower bound not found.\n" << endl;

	if(ub != s.end()) cout << "Upper bound of 11 is " << *ub << endl;
    else cout << "Upper bound not found.\n" << endl;


  //finding element
	auto a = s.find(17);
	if(a != s.end()) cout << *a << " found on the list.\n";
	else cout << "17 did not found on the list.\n";


  //removing element
    auto b = s.find(19);
	if(b != s.end())
	{
		cout << *b << " deleted from the set.\n";
		s.erase(19);
	}
	else cout << "19 did not found on the list to remove.\n";
	

    cout << "\n[Ranged-based for loop output]\n";
	for(int i: s) cout << i << " ";
    
	cout << "\n[Iterator-based for loop output]\n";
	for(auto i = s.begin(); i != s.end(); i++) cout << *i << " ";

	
	s.clear();
	if(s.empty() == true) cout << "\nSet is empty now.\n";
	else cout << "\nSet is not empty now.\n";
 	
}
