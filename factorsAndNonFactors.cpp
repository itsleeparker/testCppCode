#include<iostream>
using namespace std;

int getDifference(int n){
  int factors = 0 , nonFactors = 0;
  for(int i =1 ; i<=n ; ++i){
    if(n%i == 0){
      if(n!=i)
          factors = factors + i;
      
    }else{
      nonFactors = nonFactors + i;
    }
  }
  cout << "Non Factors "<<nonFactors<<endl;
  cout << "Facors are "<<factors<<endl;
  return nonFactors - factors;
}

int main(){
  int n;
  cout << "\nGreetings User \n"<<endl;
  cout << "\nEnter a number"<<endl;

  cin >> n;
  cout << "The differnce for factorial and non factoral for given number "<<n<<" is "<<getDifference(n)<<endl;
  return 0;
}
