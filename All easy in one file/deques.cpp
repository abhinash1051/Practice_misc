// 5. What is a Dequeue?
// It is a double-ended queue,
// or a data structure, where the elements
// can be inserted or deleted at both ends (FRONT and REAR).
// exmaple

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    // create a deque
    deque<int> dq;

    dq.push_back(19);
    dq.push_back(27);
    dq.push_back(57);

    // inserting element al the front
    dq.push_front(55);
    dq.push_front(77);
    dq.push_front(10);

    // print the deque value
    cout << ;
    cout << "Deque after instertion :";
    return 0;
}