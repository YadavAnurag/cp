#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
  vector<int> sortedSquares(vector<int>& A) {
    vector<int> vi;
    int length = A.size();

    if(length == 0) {
      return vi;
    }else if(length == 1){
      vi.push_back(A[0] * A[0]);
      return vi;
    }

    int leftIndex{0}, rightIndex{0}, i{0};
    for(i=0; i<A.size(); i++){
      if(A[i] >= 0){
        break;
      }
    }
    if(i==0){
      leftIndex = 0;
      rightIndex = 1;
    }else{
      leftIndex = i - 1;
      rightIndex = i;
    }

    /* best solution for finding +ve and -ve parts
    int k=0, j=0;
    while(k<A.size() && A[k]<0){
      k++;
    }
    j = k-1;
    */


    int leftValue{}, rightValue{};
    while(leftIndex != -1 && rightIndex != length){
      if(abs(A[leftIndex]) < abs(A[rightIndex])){
        vi.push_back(A[leftIndex] * A[leftIndex]);
        leftIndex--;
      }else{
        vi.push_back(A[rightIndex] * A[rightIndex]);
        rightIndex++;
      }
    }

    while(rightIndex != length){
      vi.push_back(A[rightIndex] * A[rightIndex]);
      rightIndex++;
    }
    while(leftIndex != -1){
      vi.push_back(A[leftIndex] * A[leftIndex]);
      leftIndex--;
    }

    return vi;
  }
};

int main(){

  vector<vector<int> > vvi;
  vvi.push_back({-7,-3,2,3,11});
  vvi.push_back({0, 2});
  vvi.push_back({-1, 2, 2});
  vvi.push_back({-1});
  vvi.push_back({-3, -1, 0});
  Solution s{};
  
  for(auto vi:vvi){
    for(auto const& num:s.sortedSquares(vi)){
      cout<<num << " ";
    }
    cout << endl;
  }


  return 0;
}