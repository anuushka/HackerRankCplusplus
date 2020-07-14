#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q, k, k_element, i, j;
    vector< vector<int> > arr(n);
    cin >> n >> q;

    for(int i = 0; i < n; i++)
    {
        cin >> k;
        for(int j = 0; j < k; j++)
        {
           cin >> k_element;
           arr[i].push_back(k_element);
        }
    }
    
    for(int n = 0; n < q; n++)
    {
        cin >> i >> j;
        cout << arr[i][j] << '\n';

    }

    return 0;
}

/*
n, q: 2 2
k: 3 1 5 4
k : 5 1 2 8 9 3
i: 0 1
j: 1 3

k[0] is number elements in the array[i]

Output:
a[i][j]

*/
