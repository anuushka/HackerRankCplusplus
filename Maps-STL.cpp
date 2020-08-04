#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n, type, marks;
    string name;
    map<string,int> m;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> type;
        switch(type)
        {
            case 1:
                cin >> name >> marks;
                if(m.find(name)==m.end())
                {
                    m.insert(make_pair(name, marks));
                }
                else
                {
                    m[name] += marks;
                }
                break;
            case 2:
                cin >> name;
                m.erase(name);
                break;
            case 3:
                cin >> name;
                if(m.find(name) != m.end())
                {
                    cout << m.find(name)->second << '\n';
                }
                else 
                {
                    cout << "0" << '\n';
                }

                break;
        }

    }
    return 0;
}
