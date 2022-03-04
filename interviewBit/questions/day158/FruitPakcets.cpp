#include <iostream>

using namespace std;

int Solve(int A, int B, int C){
  int total{0};
  int sum = A+B+C;
  int temp = min(A, B);

  if(temp >= sum/3){
    total = temp;
  }else{
    total = (A/3 + B/3);
  }
  return total;
}
int main(){

  cout << Solve(3, 6, 0) << endl;
  cout << Solve(10, 1, 10) << endl;
  cout << Solve(4, 4, 1) << endl;
  return 0;
}