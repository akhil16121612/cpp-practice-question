#include <iostream>   
#include "Movies.h"
using namespace std;
void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating,int watched);
void increment_watched(Movies &movies,std::string name){
    if(movies.increment_watched(name)){
        cout << name << "watch increment" << endl;
    }else{
        cout << name << " not found " << endl;
    }
}
int main() {
    Movies my_movies;
    my_movies.display();
    add_movie(my_movies, "big" , "PG-13",2);
    my_movies.display();
    // increment_watched(my_movies,"big");
    my_movies.display();
    return 0;
}
