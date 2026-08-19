#include <bits/stdc++.h>
#include <iostream>
#define n 3
#include <cmath>
using namespace std;

void swap(int a[n][n] ){
    for(int i = 0 ; i < n ; i++){
        int t = a[0][i];
        a[0][i] = a[n-1][i] ;
        a[n-1][i] = t;
    }
    // for printing

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
            cout << a[i][j] << " ";
        cout << endl;
    }

}

int main(){
    int a[n][n] = {
        {1,2,3},
        {4,5,6},
        {1,4,6}
    };
    swap(a);
    return 0;
}
