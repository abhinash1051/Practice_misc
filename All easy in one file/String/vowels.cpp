#include <iostream>
using namespace std;
int main()
{

    string str = "abhinash";

    int count = 0;

    // for print letter
    // while (str[count] != '\0')
    // {
    //     if (str[count] == 'a' || str[count] == 'e' || str[count] == 'i' || str[count] == 'o' || str[count] == 'u')
    //     {
    //         cout << str[count] << " ";
    //     }
    //     count++;
    // }

    // for count vowels
    int i = 0;
    while (i < 8)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
        i++;
    }
    cout << count << endl;
}