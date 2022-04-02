#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n-1;i++){
    cin>>arr[i];
  }
  int missing=(n*(n+1))/2;
  int sum=0;
  for(int i=0;i<n-1;i++){
    sum+=arr[i];
  }
  int miss=missing-sum;
  cout<<"The missing element int the array is :-"<<miss<<endl;
}
