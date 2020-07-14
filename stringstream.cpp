#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
    stringstream ss(str);
    vector<int> ints;
    int tmp;
    char ch;
    while(ss >> tmp)
    {
        ints.push_back(tmp);
        ss >> ch;
    }
    return ints;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
