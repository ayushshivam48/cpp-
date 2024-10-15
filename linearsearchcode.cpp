#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 8, 9, 11};

    // Element to be searched
    int key  = 8;

    // Searching for key in the vector v
    auto it = find(v.begin(), v.end(), key);

    // Checking if element is found or not
    if (it != v.end())
        cout << key << " Found at Position: " <<
              it - v.begin() + 1;
    else
        cout << key << " NOT found.";

    return 0;
}
