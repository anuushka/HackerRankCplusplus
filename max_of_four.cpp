#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    vector<int> arr = {a, b, c, d};
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[0] < arr[i])
            arr[0] = arr[i];
    }

    return arr[0];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
