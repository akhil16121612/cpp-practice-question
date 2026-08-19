#include <algorithm>
#include <iostream>
#define n 3
using namespace std;

void trace(int A[n][n]) {
    int p = 0; // initialize sum to 0
    for (int i = 0; i < n; i++) {
        p += A[i][i]; // directly add diagonal element
    }
    // return p;
    cout << "trace = " << p;
}

int main(){
    int A[n][n] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int p;
    trace(A );
    return 0;
}