#include <iostream>
using namespace std;

int main(){
    
    for(auto i = 1 ; i <= 5 ; ++i){
        for(auto j = 1  ; j <= i ; ++ j ){
            cout << i ;

        }
        for(auto c = 5 ; c >= 1 ; c--){
            cout << " " << endl;
        }
    }
}