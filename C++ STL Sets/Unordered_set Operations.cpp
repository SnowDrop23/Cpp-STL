
#include <iostream>
#include <unordered_set>
using namespace std;


int main()
{
    unordered_set <int> us;
    unordered_set <int> uss;

    us.insert(15);
    us.insert(15);
    us.insert(10);
    us.emplace(190);
    us.emplace(45);

    cout << us.count(15) << endl;
    //cout << us.bucket_count() << endl;
    for(auto i : us) cout << i << " ";
    cout << endl;

    auto a = us.find(15);
    if(a != us.end()) cout << *a << " found!\n";
    else cout << "15 didnot found!\n";

    //removing any element
    auto b = us.find(10);
    if(b != us.end())
    {
        cout << *b << " deleted.\n";
        us.erase(10);
    }
    else cout << "15 did not found to remove.\n";

    cout << "\n[Ranged-based for loop output]\n";
    for(int i : us) cout << i << " ";

    cout << "\n\n[Iterator-based for loop]\n";
    for(auto i = us.begin(); i != us.end(); i++) cout << *i << " ";

    //cout << "\n[Elements in reversed order]\n";
    //for(auto i = us.rbegin(); i != us.rend(); i++) cout << *i << " ";

    //swapping sets
    uss.swap(us);
    cout << "\n\n[elements in \"uss\" after swapping]\n";
    for(int i : uss) cout << i << " ";

    if(us.empty()) cout << "\n\n\"us\" is empty now!";
    else cout << "us is not empty.";

    //erasing all elements of uss
    uss.clear();
    if(uss.empty()) cout << "\n\n\"uss\" is empty now!";
    else cout << "uss is not empty.";

}
