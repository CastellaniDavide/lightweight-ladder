/**
 * @file lightweight-ladder.cpp
 *
 * @version 01.01 2020-9-1
 *
 * @brief https://training.olinfo.it/#/task/ois_ladder/statement
 *
 * @ingroup lightweight-ladder
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

#include <bits/stdc++.h>

using namespace std;

int N, now, last, h;

int main()
{
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
//  4 4 2 2 5 -> 4
//  10 2 6 3 7 0 0 7 3 6 4 -> 7

  cin >> N;
  now = 0;
  h = 0;

  for(int i=0; i < N; i++){
    last = now;
    cin >> now;
    if(now - last > h)
        h = now - last;
  }

  cout << h;

  return 0;
}
