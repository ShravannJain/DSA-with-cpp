#include <iostream>
using namespace std;

int main() {

  int a[10], n, i;
  cout << "Enter the size:";
  cin >> n;
  for (i = 0; i < n; i++)
    cin >> a[i];

  int max = a[0],min=a[0];

  for (i = 0; i < n; i++) {
    if (a[i] > max)
      max = a[i];
    if (a[i] < min)
      min = a[i];
  }
  cout << "The maximum element in the array is" << max << endl;
  cout << "The minimum element in the array is" << min << endl;
  return 0;
}