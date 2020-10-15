#include <iostream>
#include <cmath>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string name,query;
    int num;
    cin >> n;
    string ar[n];
    unordered_map<string, int> mp;  // unordered-map.find() is O(1), map.find() is O(logN)
    for(int i = 1; i <= n; i++)
    {
        cin >> name >> num;
        mp.insert(pair<string, int>(name, num));
    }
    int i = 0;
    getline(cin, query);
    while (getline(cin, query)) //accepting input without knowing the length of the input.
    {
        if(mp.find(query) == mp.end())
        {
            cout << "Not found" << endl;
        }
        else{
            cout << query << "=" << mp.at(query) << endl;
        }
    }
    return 0;
}
