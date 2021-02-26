#include <iostream>
#include <ctime>

bool PlayGame(int difficulty);

int main() {
    int LDifficulty = 1;
    int MaxDifficulty = 5;
    std::cout <<"\nYou are a secret agent" << std::endl; 
    std::cout <<"\nCrack the codes in the given time" << std::endl;
    while (LDifficulty <= MaxDifficulty) {
        srand(time(NULL));
        if (PlayGame(LDifficulty)) {
            LDifficulty++;
        }
    }
    std::cout << "\nGood job dumbass! You finished the game!" << std::endl;
}

bool PlayGame(int difficulty) {
    //Declaring Variables
    int CodeA = rand() % 2 +1;
    int CodeB = rand() % 4 +1;
    int CodeC = rand() % 6 +1;

    int CodeSum = CodeA + CodeB + CodeC; 
    int CodeProduct = CodeA * CodeB * CodeC;
    int GuessA, GuessB, GuessC;

    //Print Introduction
    std::cout << "\nLevel: " << difficulty << std::endl;
    std::cout << "The sum of the code is: " << CodeSum << std::endl;
    std::cout << "The product of the code is: " << CodeProduct << std::endl;
    //Waiting for player guess
    std::cout << "Please enter the first code: ";
    std::cin >> GuessA;
    std::cout << "Please enter the second code: ";
    std::cin >> GuessB;
    std::cout << "Please enter the third code: ";
    std::cin >> GuessC;
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) {
        std::cout << "You found the right code!" << std::endl;
        return true;
    } else {
        std::cout << "Try again!" << std::endl;
        return false;
    }
}
