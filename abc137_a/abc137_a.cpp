// clang++ -std=c++11 abc137_a.cpp
// https://atcoder.jp/contests/abc137/tasks/abc137_a

#include <iostream>
using namespace std;

int main()
{
    int A, B;
    int add, subtract, times;
    cin >> A >> B;

    add = A + B;
//    cout << add << endl;
    subtract = A - B;
//    cout << subtract << endl;
    times = A * B;
//    cout << times << endl;

    if (add > subtract)
        if (add > times)
            cout << add << endl;
        else
            cout << times << endl;
    else if (subtract > times)
        cout << subtract << endl;
    else
        cout << times << endl;

    return 0; 
}