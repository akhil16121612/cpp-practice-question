#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> a , int place){
    if(a.size() == 1){
        cout << "the vector consisits of only 1 element" << endl;

    }else{
        for (auto i = place ; i < a.size() ; i++){
            cout << a[i] << " " ;
        }
        for(auto j = 0 ; j < place ; j++){
            cout << a[j] << " ";
        }
    }
}

int main(){
    vector<int> a = {1,2,3,4,5};
    int place = 4;
    rotate(a,place);
    return 0;
}