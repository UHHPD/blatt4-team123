#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int laenge(double zahl) {
  double count;
  count = 0;
  while ((zahl/pow(10,count)) > 10)
    count++;
  return static_cast<int>(count);
}

int main() {

  long double s;
  double n;
  long double pi;
  long double backup;
  int length;
  s  = 1;
  n  = 1;
  pi = 3;

  do {
    cout << 3*pow(2,n);
    length = laenge(3*pow(2,n));
    for (int x=0;x<(9-length);x++)
      cout << " ";
    cout << setprecision(19) << pi << endl;
    backup = pi;
    s = sqrt(s*s/4+(1-sqrt(1-s*s/4))*(1-sqrt(1-s*s/4)));
    pi = 3*pow(2,n)*s;
    n++;
  } while (backup != pi);

  return 0;

}
