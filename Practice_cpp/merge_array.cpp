#include <string>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> a , vector<int>b){
    // if(a.size() == 0 || b.size() == 0){
    //     cout << "one of the vector is empty " << endl;
    
    // }
    
        // vector<int> c ;
        // c.insert(c.end(),a.begin() , a.end());
        // c.insert(c.end(),b.begin(),b.end());
        
        vector<int> result(a); 
        result.insert(result.end(), b.begin(), b.end()); 
        for(auto i = 0; i < result.size() ; i++){
            cout << result[i] << " " ;
        }
    
}

int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {5,4,3,5,6,7};
    merge(a,b);
    return 0;
}