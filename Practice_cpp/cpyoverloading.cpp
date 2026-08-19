#include <iostream>
#include <cstring>
using namespace std;
// ///////////////////////////////////////////
#ifndef MYSTRING_H_
#define MYSTRING_H_

class mystring
{
private:
     char *str;
public:
    mystring();
    mystring(const char *s);
    mystring(const mystring &source);
    ~mystring();
    void display()const;
    int get_length()const;
    const char *get_str() const;
};

#endif ////
//////////

mystring::mystring()
 :str{nullptr}{
    str = new char[1];
    *str = '\0';

 }
// in order to copy operator

mystring &mystring::operator=(const mystring &rhs){
    if(this==&rhs){
        return *this;

    }else{
        delete [] str;
        str = new char(std::strlen(rhs.str)+1);
        std::strcpy(str,rhs.str);
        return *this;
    }
}

// ////////
int main(){
    mystring empty;
    mystring stooges {"stooges"};
    // this is for the move operation 
    mystring s1 = stooges;
    mystring s2 = s1;
    // 
}
// inorder to move 
/*mystring &mystring::operator=(mystring &&rhs){
    if(this== &rhs){
        return *this;    
    }else{
        delete [] str;
        str = rhs.str;
        rhs.str = nullptr;
        return *this;
    }

}*/
// 

