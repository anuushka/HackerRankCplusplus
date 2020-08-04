#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n, y, x;
    set<int> s;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> y >> x;
        switch(y)
        {
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
                if(s.find(x) != s.end())
                {
                    cout << "Yes" << '\n';
                }
                else 
                {
                    cout << "No" << '\n';
                }
                break;
        }
    }
    
    return 0;
}



