#include <vector>
#include <iostream>

using namespace std;

ostream& operator<<(ostream& os, vector<int> vi){
  os << "[ ";
  for(auto const& i:vi){
    cout << i << " ";
  }
  os << "]";
  return os;
}

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      auto it1 = begin(nums1), it2 = begin(nums2);

      while((it1 != end(nums1)) && (it2 != end(nums2))){
        
      }
    }
};

int main(){
  vector<int> vi1{1,5,7,8};
  vector<int> vi2{2,4,5,9};

  Solution s;
  cout << "Initial content \n";
  for(auto const& i:vi1){
    cout << i << " ";
  }
  cout << endl;

  s.merge(vi1, vi1.size(), vi2, vi2.size());
  cout << "content after merge \n";
  for(auto const& i:vi1){
    cout << i << " ";
  }
  cout << endl;

  return 0;
}