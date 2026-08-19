#include <iostream>
#include  <cstring>
using namespace std;
///////////////////////////////////////////////////////////////
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

#endif

/////////////////////////////////////////////////////////////////

mystring::mystring()
   : str{nullptr}{
    str = new char[1];
    *str = '\0';

    
}
mystring::mystring(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            str = new char[1];
            str[0] = '\0';
        }else{
            str = new char[std::strlen(s)+1];
            std::strcpy(str,s);
        }
}
mystring::mystring(const mystring &source)
    :str{nullptr}{
        str = new char[std::strlen(source.str) + 1];
        std::strcpy(str,source.str);
}

mystring::~mystring(){delete[] str;}

void mystring::display() const{
    cout << str << endl;
}

int mystring::get_length()const {return std::strlen(str);}

const char *mystring::get_str() const{return str;}
///////////////////////////////////////////////////////////////////////////////

int main(){
    mystring empty;
    mystring larry{"larry"};
    mystring stooges{"stooges"};
    empty.display();
    larry.display();
    stooges.display();

    return 0;
}   