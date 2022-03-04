#include "DVD.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

DVD::DVD(
  string name,
  int year,
  string director
):name(name), releaseYear(year), director(director){};

string DVD::toString() const{
  return name + ", directed by " + director + ", released in " + to_string(releaseYear);
}

void print(vector<DVD> vDVD){
  for(auto const& dvd:vDVD){
    cout << dvd << endl;
  }
}
int main(){

  vector<DVD> vDVD(15, DVD());

  DVD avengersDVD = DVD("The Avengers", 2012, "John Whedon");
  DVD incrediblesDVD = DVD("The Incredibles", 2004, "Brad Bird");
  DVD findingDoryDVD = DVD("Finding Dory", 2016, "Andrew Stanton");
  DVD lionKing = DVD("The Lion King", 2019, "Jon Favreau");

  // cout << avengersDVD.toString() << endl;
  vDVD[7] = avengersDVD;
  vDVD[3] = incrediblesDVD;
  vDVD[9] = findingDoryDVD;
  vDVD[2] = lionKing;

  print(vDVD);

  return 0;
}