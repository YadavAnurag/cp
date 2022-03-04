#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
  int countDigits(int num){
    int digits{0};
    while(num){
      num/=10;
      digits++;
    }
    return digits;
  }
  int findNumbers(vector<int>& nums) {
    int numbers{0}, digits{0};
    for(auto const& num:nums){
      digits = countDigits(num);
      numbers = digits%2==0 ? numbers+1 : numbers; 
    }
    return numbers;
  }
};

int main(){

  vector<int> vi{12, 345, 2, 6, 7896};
  Solution s{};
  std::cout << s.findNumbers(vi);


  return 0;
}
