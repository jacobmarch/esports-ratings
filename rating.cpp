#include <iostream>
#include <string>


//Classes
#include "team.h"

using namespace::std;

int main(){
    team teamA;

    teamA.setName("Lions");
    cout << teamA.getName();
}