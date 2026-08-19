#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkUnordered(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;

    // Sort both vectors before comparing
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {5,4,3,2,1};

    cout << boolalpha;
    cout << "Are vectors equal (ignoring order)? " << checkUnordered(a,b) << endl;

    return 0;
}
