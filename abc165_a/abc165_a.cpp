/*
https://atcoder.jp/contests/abc165/tasks/abc165_a
$ clang++ -std=c++11 abc165_a.cpp
*/

#include <iostream>
using namespace std;

int main()
{
  bool flag = false;
  int K, A, B;
  cin >> K;
  cin >> A >> B;

  while( A < B ){
    if (A % K == 0) {
      flag = true;
      break;
    }
    A++;
  }

  if (flag) {
    cout << A << ": " << "OK" << endl;
  } else {
    cout << "NG" << endl;
  }


  return 0;
}
