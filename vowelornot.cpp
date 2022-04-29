#include<iostream>
using namespace std;
#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL checkVowel(char ch){
  if(ch == 'a' || ch == 'i' || ch == 'o' || ch =='e' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch =='U')
    return TRUE;
  else
    return FALSE;
}


int main(){
  char ch;
  cout << "Check Vowel!!" <<endl;
  cout<< "Enter a char" <<endl;
  cin >> ch;
  if(checkVowel(ch) == 0)
    cout << "TRUE";
  else
    cout << "FALSE"; 
 
  cout << endl;
  return 0;
}
