#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long power(int a , unsigned b){
    long long pow = 1;
    for(auto i = 0  ; i < b ; ++i){
        pow = pow  * a;
        

    }
    return pow;

}

int main(void){
    int a = 10;
    unsigned b = 2;
    int result = power(a , b);
    cout << result << endl;
    return 0;
}