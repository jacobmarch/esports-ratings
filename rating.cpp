#include <iostream>
#include <fstream>

using namespace::std;
int potRating;
int ratingDiff;
int baseChange = 100;
int actualChange;
int teamRatingA = 1000;
int teamRatingB = 980;
bool contUpdate = true;
string winner;

int ratingBonus(int rating1, int rating2){
        if (rating1 > rating2){
            ratingDiff = rating1 - rating2;
            actualChange = baseChange / (1/ratingDiff);
        }
        else if (rating2 > rating1){
            ratingDiff = rating2 - rating1;
            actualChange = baseChange / (1/ratingDiff);
        }
        else {
            ratingDiff = 0;
            actualChange = baseChange;
        }
        return actualChange;
}

int main(){
    while (contUpdate == true){
        int updateAmt = ratingBonus(teamRatingA, teamRatingB);
        cout << "Who won?";
        cin >> winner;
        if (winner == "a" || winner == "A") {
            teamRatingA = teamRatingA + updateAmt;
            teamRatingB = teamRatingB - updateAmt;
        }
        else if (winner == "b" || winner == "B"){
            teamRatingA = teamRatingA - updateAmt;
            teamRatingB = teamRatingB + updateAmt;
        }
        else {
            break;
        }
        cout << "New Ratings" << endl;
        cout << "Team A: " << teamRatingA << endl;
        cout << "Team B: " << teamRatingB << endl;
    }
    return 0;
}