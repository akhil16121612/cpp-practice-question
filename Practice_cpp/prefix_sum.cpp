#include <vector>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

void prefix_sum(vector<int> a ){
    if(a.size() == 1){
        cout << a[0] ;

    }else{
        for(auto i = 0 ; i < a.size() ; i++){
            a[i+1] += a[i];
            cout << a[i] << " ";
        }
    }
}

int main(){
    vector<int> a ={10,20,30,40,50};
    prefix_sum(a);
    return 0;
}