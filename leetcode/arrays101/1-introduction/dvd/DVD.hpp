#include <string>
#include <iostream>

class DVD{
  private:
    std::string name{};
    int releaseYear{};
    std::string director{};
  public:
    DVD() = default;
    DVD(
      std::string name,
      int year,
      std::string director
    );

    std::string toString() const;
    

    // overloading << operator eg. cout<<DVD
    friend std::ostream& operator<<(std::ostream& os, DVD const& dvd){
      os<< dvd.name + ", released in " + std::to_string(dvd.releaseYear) + ", directed by " + dvd.director;
      return os;
    }
};
