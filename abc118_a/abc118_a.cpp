/*
https://atcoder.jp/contests/abc118/tasks/abc118_a
$ clang++ -std=c++11 abc118_a.cpp
*/

#include <iostream>
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  if (B % A == 0) {
    cout << A + B << endl;
  } else {
    cout << B - A << endl;
  }

  return 0;
}