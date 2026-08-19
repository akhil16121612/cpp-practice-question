#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void reverse(string a){
    if (a.size() == 0){
        return;

    }else{
        reverse(a.substr(1));
        cout << a[0];
    }
}

int main(){
    string b = "hello world";
    reverse(b);
    
}