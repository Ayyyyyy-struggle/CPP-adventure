#include <iostream>

int main() {
  
  /*Declare and initiate variable dog-age
   this version of the program is for dogs older than 2 years old */
  int dog_age = 12;
  
  int early_years, later_years, human_years;

  //The first two years of a dog's life count as 21 human years
  early_years = 21;

  //Each following year counts as 4 human years
  later_years = 4*(dog_age - 2);

  //Human years equals early and later years added together
  human_years = early_years + later_years;

  std::cout << "My name is Puppy! Ruff ruff, I am " << human_years << " years old in human years.\n";

  return 0;
  
}
