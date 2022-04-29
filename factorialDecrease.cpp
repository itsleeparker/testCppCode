#include<iostream>
using namespace std;

void Display_reverse(int n){
  int i = n;
  while(i!= 0){
    if(n%i == 0)
      if(n!=i)
        cout<<"\t"<<i;
    i--;
  }
  cout << " "<<endl;
}

int main(){
  int n;
  cout << "--Display Number is reverse----"<<endl;
  cout << "Enter a  number  : ";
  cin >> n;
  cout << "\nThe factorials are : "<<endl;
  Display_reverse(n);

  return 0;
}
