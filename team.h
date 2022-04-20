#include <iostream>
#include <string>

using namespace::std;

class team {
    public:
        void setName(string n) {
            name = n;
        }
        string getName(){
            return name;
        }
        void setRating(int r){
            rating = r;
        }
        int getRating(){
            return rating;
        }
    private:
        int rating = 1000;
        string name;

};