// method where the attribute is used from library (bits/stdc++.h)
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = {"hello"};
    reverse(s.begin() , s.end());
    cout << s;
    return 0;
}*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s = {"hello world"};
    // here we have two options 
    // 1. is to temporarily create an array and then replace it with the actual array
    // 2. is create another array inorder to have the original array not changed
    string b = string(s.rbegin() , s.rend());
    cout << b << endl;
    cout << s;
}

