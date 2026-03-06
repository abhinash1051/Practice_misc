#include <iostream>
using namespace std;
int main()
{

    string s = "abc";
    string t = "def";

    s = s + t;
    cout << s << endl;

    // or

    s = s + "abhinash";
    cout << s << endl;

    s = s + "123";
    cout << s << endl;

    s = "abhi" + s;
    cout << s << endl;
}