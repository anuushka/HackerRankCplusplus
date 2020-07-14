#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int n;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        arr.push_back(data);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int y;
        cin >> y;
        vector<int>::iterator iter;
        iter = lower_bound(arr.begin(), arr.end(), y);
        cout << ((*(iter + 1) == y || *iter == y)? "Yes " : "No ") << iter - arr.begin() + 1 << '\n';
    } 
    return 0;
}
