
#include <iostream>
#include <set>
using namespace std;


int main()
{
	multiset<int> s1;
	multiset<int>s2;

	s1.insert(15);
	s1.insert(11);
	s1.insert(8);
	s1.insert(14);
	s1.insert(21);
	s1.insert(11);
	s1.insert(11);

	cout << s1.count(21) << endl; //occurrence of any element
	//cout << *(s1.end()) << endl;
	
	auto lb = s1.lower_bound(14);
	auto ub = s1.upper_bound(14);

	if(lb != s1.end()) cout << "Lower bound of 14 is: " << *lb << endl;
	else cout << "Lower bound of 14 is not found: " << endl;

	if(ub != s1.end()) cout << "Upper bound of 14 is: " << *ub << endl;
	else cout << "Lower bound of 14 is not found: " << endl;

	//finding element
	auto a = s1.find(11);
	if(a != s1.end()) cout << *a << " found on the set.\n";
	else cout << "11 didn't found on the set.\n";

	//removing any element
	auto b = s1.find(21);
	if(b != s1.end()) 
	{
		cout << *b << " deleted from the set.\n";
		s1.erase(21);
	}
	else cout << "21 didn't found on the list to remove.\n";

	cout << "\n[Ranged-based for loop output]\n";
	for(int i : s1) cout << i << " ";

	cout << "\n\n[Iterator-based for loop output]\n";
	for(auto i = s1.begin(); i != s1.end(); i++) 
	    cout << *i << " ";

	cout << "\n\n[Elements in reversed order]\n";
	for(auto i = s1.rbegin(); i != s1.rend(); i++)
	    cout << *i << " ";
	
	//swapping multisets
	s2.swap(s1);
	cout << "\n\n[Elements of s2 after swapping]\n";
	for(int i : s2) cout << i << " ";

	if(s1.empty()) cout << "\n\ns1 is empty now!" << endl;
	else cout << "\ns1 is not empty.\n";

	//removing all elements of s2
	s2.clear();
	if(s2.empty()) cout << "\ns2 is empty now!" << endl;
	else cout << "\ns2 is not empty.\n";


 	
}
