// #include <algorithm>
// #include <cmath>
// #include <iostream>
// #include <bits/stdc++.h>
// #define N 3
// using namespace std;

// void deter(int A[][N] , int p , int q){
//     double det = 1;
//     for(auto i = 0 ; i < N ; i++){
//         if(A[i][i] == 0){
//             bool swapped = false;
//             for(int k = i + 1 ; k <  N ; k++){
//                 if(A[k][i] != 0){
//                     swap(A[i] , A[k]);
//                     det *= -1;
//                     swapped = true;
//                     break;
//                 }
//             }
//         if(!swapped) return 0;
//         }
//         for(auto j = i + 1 ; j < N ; j++){
//             if(A[j][i] == 0) continue;
//             double factor = (double) A[j][i] / A[i][j];
//             for(int k = i ; k < N k++){
//                 A[j][k] -= factor * A[i][k];
//                         }
//         }
//     }
//     for(int j = i +1 ; j < N ; j++){
//         det *= A[i][i];
//     }
//     return det;
// }
// int main(){
//     int A[N][N] = {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int B[N][N];
//     deter(A,B);

// }
#include <iostream>
#include <algorithm>
using namespace std;

#define N 3

double determinant(int A[][N], int n) {
    double det = 1.0;

    for (int i = 0; i < n; i++) {
        // If pivot is zero, swap with a lower row
        if (A[i][i] == 0) {
            bool swapped = false;
            for (int k = i + 1; k < n; k++) {
                if (A[k][i] != 0) {
                    for (int j = 0; j < n; j++) {
                        swap(A[i][j], A[k][j]);
                    }
                    det *= -1; // row swap changes sign
                    swapped = true;
                    break;
                }
            }
            if (!swapped) return 0; // column is all zeros → determinant = 0
        }

        // Eliminate below pivot
        for (int j = i + 1; j < n; j++) {
            if (A[j][i] == 0) continue;
            double factor = (double)A[j][i] / A[i][i];
            for (int k = i; k < n; k++) {
                A[j][k] -= factor * A[i][k];
            }
        }
    }

    // Multiply diagonal elements
    for (int i = 0; i < n; i++) {
        det *= A[i][i];
    }

    return det;
}

int main() {
    int A[N][N] = {
        {1, 2, 3},
        {1, 5, 6},
        {7, 8, 9}
    };

    cout << "Determinant = " << determinant(A, N) << endl;
    return 0;
}
