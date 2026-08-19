#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void lexi(string a, string b){
    if(lexicographical_compare(a.begin() , a.end() , b.begin() , b.end())){
        cout << "a is lexicogolically smaller than b";

    }
    else{
        cout << "a is lexicologically greater than b";
    }
}

int main(){
    string a = {"he"};
    string b = {"app"};
    lexi(a , b);
    return 0;
}