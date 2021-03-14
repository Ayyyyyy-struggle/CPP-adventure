//This code calculate user's weight on the other 7 planets by converting his current earth weight
//Use switch statement to generate 7 different cases


#include <iostream>

int main() {
  
  double weight, planet_weight;
  int num = 7;

  //Ask him to input the weight
  std::cout << "Type in your earth weight: ";
  std::cin >> weight;

  //Ask him to type in a number for the planet he wants to fight on
  std::cout << "Here are five planets you can choose: \n";
  std::cout << " 1. Mercury\n 2. Venus\n 3. Mars\n 4. Jupiter\n 5. Saturn\n 6.Uranus\n 7. Neptune\n";
  std::cout << "Type in the number for the planet you want to fight on: ";
  std::cin >> num;

  //Set up different cases for conversion
  //Print out result after conversion
  switch (num) {
    case 1:
      planet_weight = 0.38 * weight;
      std::cout << "Your weight on the Mercury is " << planet_weight << "/n";
      break;
    case 2:
      planet_weight = 0.91 * weight;
      std::cout << "Your weight on the Venus is " << planet_weight << "\n";
      break;
    case 3:
      planet_weight = 0.38 * weight;
      std::cout << "Your weight on the Mars is " << planet_weight << "\n";
      break;
    case 4:
      planet_weight = 2.34 * weight;
      std::cout << "Your weight on the Jupiter is " << planet_weight << "\n";
      break;
    case 5:
      planet_weight = 1.06 * weight;
      std::cout << "Your weight on the Saturn is " << planet_weight << " \n";
      break;
    case 6:
      planet_weight = 0.92 * weight;
      std::cout << "Your weight on the Uranus is " << planet_weight << " \n";
      break;
    case 7:
      planet_weight = 1.19 * weight;
      std::cout << "Your weight on the Neptune is " << planet_weight << " \n";
      break;
  }
  
  
  return 0;
  
  
  
  
}
