#include<iostream>
using namespace std;


void printEven(int n){
  int i = 0;
  int count = 2;
  
  if(n == 0) 
    return;

  while(count != n-1){
    if(i%2){
      cout << i <<"\t";
      count++;
    }
    i++;
  }
}


int main(){
  int n;
  cout << "\nN number of even numbers\n"<<endl;
  cout << "\nEnter a number ";
  cin >> n;

  printEven(n);
  cout<< "\nThank you use agian"<<endl;
  return 0;
}
