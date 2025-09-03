#include<iostream>
using namespace std;
int main(){

    int a[10],n,i;
    cout<<"Enter the size";
    cin>>n;
    for(int i=0;i<n; i++)
    cin>>a[i];
    cout<<"The number you entered"<<endl;
    for(int i=0;i<n; i++)
    cout<<a[i]<<endl;
    return 0;
}