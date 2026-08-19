#include <iostream>
#include <cstring>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#define N 4
using namespace std;

void transpose(int A[][N] , int B[][N]){
       for(auto i = 0 ; i < N ; i++){
        for(auto j = 0 ; j < N ; j++){
            B[j][i] = A[i][j];
        }
       }
    //    for printing
    
    for(auto i = 0 ; i < N ; i++){
        for(auto j = 0 ; j < N ; j++){
            cout << B[i][j] << " ";
        }
    cout << endl;
    }
}

int main(){
    int A[N][N] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int B[N][N];

    transpose(A,B);
    return 0 ;
}
