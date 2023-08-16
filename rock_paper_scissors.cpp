#include <iostream>
#include <stdlib.h>

int main() {

  /* This is a rock, paper, scissors game -- with two added options of lizard and spock */

  srand (time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
 
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
 
  std::cout << "shoot! ";

  int rock = 1;
  int paper = 2;
  int scissors = 3;

  std::cin >> user;


  std::cout << "computer: " << computer << "\n\n";
  
  if (user == rock && computer == scissors) {
      
    std::cout << "You Win!\n";
    
  } else if (user == scissors && computer == paper) {
    
    std::cout << "You Win!\n";
    
  } else if (user == paper && computer == rock) {
    
    std::cout << "You Win!\n";
      
  } else if (user == computer) {
      
    std::cout << "Tie!\n";
      
  } else {
      
    std::cout << "You Lose!\n";
      
  }

}