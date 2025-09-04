#include <iostream>
using namespace std;
int main() {

  int a[10], i;

  cout << "Enter the elements for the array:";
  for (i = 0; i < 5; i++)
    cin >> a[i];
  cout << "revsersing the elements";
  int start=0,end=4,temp=0;
  while(start<end){
    temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    start++;
    end--;
  }
  cout << "The new reversed array" << endl;
  for (i = 0; i < 5; i++)
    cout << a[i] << endl;
  return 0;
}