#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check( vector<int> a , vector <int> b){
    // if (a.empty() || b.empty() ){
    //     // cout << "they are not equal" << endl;
    //     return false;
    // }else{
    //     for(auto i = 1; i < size_t)
    // }

    if(a.size() != b.size()) return false;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    //
    
    for(size_t i = 0; i < a.size() ; i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {5,4,3,2,1};
    cout << boolalpha;
    cout << check(a,b);
    return 0;
}