#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
      
      auto it = begin(arr);
      auto prevSize = arr.size();

      while(it != end(arr)){
        if(*it == 0){
          it = arr.insert(it, 1, 0);
          it++;
        }
        it++;
      }
      
      it = begin(arr);
      arr.erase(it+prevSize, end(arr));
      return;
    }
};

int main(){

  vector<vector<int> > vvi{
    {1,2,3,0},
    {0,1,2,3},
    {0},
    {1,2,0,3,4},
    {},
    {1,2,3,4}
  };

  Solution s;
  for(auto &vi:vvi){
    cout << "Initial content \n";
    for(auto const& i:vi){
      cout << i << " ";
    }
    cout << endl;

    s.duplicateZeros(vi);
    cout << "content after duplication \n";
    for(auto const& i:vi){
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}