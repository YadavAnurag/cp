#include <vector>

using namespace std;

class Solution {
public:
  int findMaxConsecutiveOnes(vector<int>& nums) { 
    int ones{0}, prev{0}, temp{0};
    for(auto const& num:nums){
      if(num == 1){
          prev = 1;
          temp++;
          ones = temp > ones ? temp : ones;
      }else{
          prev = 0;
          temp = 0;
      }
    }
    return ones;
  }
};

int main(){

}