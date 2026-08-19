#include <iostream>
#define n 3
using namespace std;

void multipy(int a[n][n] ,int b[n][n]){
    int rslt[n][n];
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            rslt[i][j] = 0;
            for(int k = 0 ; k < n ;k++){
                rslt[i][j] += a[i][k] * b[k][j];
            }
            cout << rslt[i][j] << "\t" ;
        }
        cout << endl;
    }
}

int main(){
    int a[n][n] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int b[n][n] = {
        {1,2,3},
        {1,4,5},
        {7,4,3}
    };
    multipy(a, b);
    return 0;
}