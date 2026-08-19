#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void check_max(vector<int> a ){
    if(a.size() == 1){
        cout << "there is only 1 number in the given array hence it is only max" << endl;

    }else{
        int current_max = a[0];
        for(auto i = 1 ; i < a.size() ; i++){
            if(a[i] > current_max){
                cout << "it is  the max value " << a[i] << endl;
                current_max = a[i];
            }else{
                cout << "it is not the max value" << a[i] << endl;
            }
        }
        cout << "final maximum value of the arrray is : " << current_max << endl;
     }
}

int main(){
    // vector<int> a = {1,2,3,4,5};
    vector<int> a = {5,4,3,2,6};
    check_max(a);
    return 0;
}