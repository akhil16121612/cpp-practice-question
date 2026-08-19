#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> remove_leading(vector<int>& a  ){
    vector<int> b;
    for(auto i = 0 ; i < a.size() ; i++){
        if(a[i] != 0){
            b.push_back(a[i]);

        }
    }
    return b;
}

int main (){
    vector<int> a = {1,2,3,0,0,0,3,4};
    vector<int>b = remove_leading(a);
    // remove_leading(a,b);
    cout << "Result: ";
    for (int num : b) {
        cout << num << " ";
    }
    cout << endl;
    return 0 ;
}