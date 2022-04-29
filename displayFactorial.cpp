#include<iostream>
using namespace std;

void DisplayFactorial(int n){
  for(int i=1 ; i<=n ; ++i){
    if(n%i == 0)
      if(n!=i)
        cout << "\t "<<i;
  }
  cout << "\n"<<endl;
}

int main(){
  int n;
  cout <<"\n---Display Factorial---\n"<<endl;
  cout << "\nEnter a number "<<endl;
  cin >> n;
  cout << "\nThe factoral for "<<n<<" is : \n"<<endl;
  DisplayFactorial(n);
  return 0;
}
