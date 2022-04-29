#include<iostream>
using namespace std;

void DisplayEven(int n){
  for(int i=1 ; i<n; i++){
    if(n%i == 0 && n/2)
      cout <<"\t"<<i;
  }
  cout<<" "<<endl;
}

int main(){
  int n;
  cout << "\nPrint Even Factors"<<endl;
  cout << "\nEnter a number : "<<endl;
  cin >> n;

  DisplayEven(n);

  return 0;
}
