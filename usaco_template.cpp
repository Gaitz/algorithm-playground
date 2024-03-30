/*
ID: gaitzga1
LANG: C++11
PROG: ride
*/
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string solve(string a, string b) { return a; }

int main() {
  ofstream fout("ride.out");
  ifstream fin("ride.in");
  string a, b;
  fin >> a >> b;
  fout << solve(a, b) << endl;
  return 0;
}