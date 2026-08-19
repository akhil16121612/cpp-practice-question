#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

void common(vector<int> a , vector<int> b){
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    for(auto i = 0 ; i < a.size() ; i++){
        for(auto j = 0 ; j < b.size() ; j++){
            if(a[i] == b [j]){
                cout << "common element is " << a[i] << endl;
            }
        }
    }
}

int main(){
    vector <int> a = {1,2,3,4,5};
    vector <int> b = {2,7,8,3};
    common(a,b);
    return 0;
}