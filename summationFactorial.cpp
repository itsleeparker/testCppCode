#include<iostream>
using namespace std;

int multiplyFactors(int n){
  int sum = 1;
  for(int i = 1; i<=n ; ++i){
    if(n%i == 0)
      if(n!=i)
        sum =sum * i;
  }
  return sum;
}

int main(){

  int n;
  cout << "\n---MULTIPLE---\n"<<endl;
  cout << "\nEnter a number "<<endl;
  cin >> n;
  cout <<" The Multiple of factorial of given number "<<n<<" is "<<multiplyFactors(n)<<endl;
 return 0;
}
