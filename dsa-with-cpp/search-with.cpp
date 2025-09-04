#include <iostream>
using namespace std;

int main() {

  int a[10], size, i, ele, pos = 0, flag = 0;
  cout << "Enter the size:";
  cin >> size;
  cout<<"Enter the elements:";
  for (i = 0; i < size; i++)
    cin >> a[i];
  cout << "Enter the element to search:";
  cin >> ele;
  for (i = 0; i < size; i++) {
    if (a[i] == ele) {
      flag = 1;
      pos = i + 1;
      break;
    }
  }
  if (flag == 1)
    cout << "Element "<<ele<<" found at" << pos << endl;
  else
    cout << "Element not found";
}