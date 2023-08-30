#include <iostream>     // std::cout  
#include <algorithm>    // std::next_permutation, std::sort  
  
using namespace std;  
  
int main () {  
  int myints[] = {1,2,3,4,5};  
  
  sort (myints,myints+5);  
  
  cout << "The 3! possible permutations with 3 elements:\n";  
  do {  
    cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << ' ' << myints[3] << ' ' << myints[4] << '\n';  
  } while ( next_permutation(myints,myints+5) );  
  
  cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';  
  
  return 0;  
}  