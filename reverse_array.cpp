//Input: The first line of the input contains N ,where N is the number of integers.The next line contains N integers separated by a space.
//Output: Print the  integers of the array in the reverse order in a single line separated by a space.

#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std;

int main() {
    int n;
    vector<int> arr;
    cin >> n;
    arr.resize(n);
    for(int i = 0; i < n; i++) 
        cin >> arr[i];

    reverse(arr.begin(), arr.end());

    for(int i  = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
