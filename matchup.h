#include <iostream>
#include <math.h>
#include "team.h"

using namespace::std;

int ratingA, ratingB, ratingChangeA, ratingChangeB;
int input;

/* ELO Rating Formula

Expected Result for Player B = 1/(1 + 10^((RatingA - RatingB)/400))
*/

void gamePlayed(team A, team B){
    ratingA = A.getRating();
    ratingB = B.getRating();

    ratingChangeB = 1/(1 + pow(10.0, ((ratingA - ratingB)/400)));
    ratingChangeA = 1/(1 + pow(10.0, ((ratingB - ratingA)/400)));
    cin >> input;

    cout << ratingB;
    cout << ratingChangeB;
    if (input  == 1){
        //TeamA wins
        A.setRating(ratingA + ratingChangeA);

    }

}