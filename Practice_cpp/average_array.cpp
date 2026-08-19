#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

void average(vector<int> a){
    int total_sum = 0;
    for(auto i = 0 ; i < a.size() ; i++){
        total_sum += a[i];
        
    }
    cout << "total sum : " << total_sum << endl;
    double average(total_sum / a.size());
    cout << "the average value is  : "<< average << endl;

}

int main(){
    vector <int> a = {1,2,3,4,5};
    average(a);
}