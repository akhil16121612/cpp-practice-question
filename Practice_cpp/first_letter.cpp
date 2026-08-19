#include <iostream>
#include <algorithm>
using namespace std;

void first_letter(string a  ){
    cout << a[0];
    for(int i = 0 ; i < a.size() ; i++){
        if(a[i] == ' '){
            cout << a[i+1];
        }

    }
    

}

int main(){
    string a = {"hello world ,"};
    first_letter(a);
    return 0;
}