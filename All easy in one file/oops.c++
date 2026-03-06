#include <iostream>
using namespace std;

// class in the oops
class player
{
public:
    int health;
    int score;
    char name;

    void showscore()
    {
        cout << "score :" << endl;
    }
};

int main()
{
    player abhi;
    abhi.score = 1000;
    abhi.health = 2000;
    cout << abhi.score << endl;
    cout << abhi.health << endl;
}