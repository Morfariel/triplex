#include <iostream>

bool PlayGame(int LevelDifficulty);

int main()
{
    //Declaring Variables
    int const CodeA = 4;
    int const CodeB = 3;
    int const CodeC = 2;

    int const CodeSum = CodeA + CodeB + CodeC;
    int const CodeProduct = CodeA * CodeB * CodeC;

    //Print Introduction
    std::cout << "You are secret agent trying to crack all the codes to prevent a disaster" << std::endl;
    std::cout << "There are three numbers in the code" << std::endl;
    std::cout << "\nThe product of the code is: " << CodeProduct;
    std::cout << "\nThe sum of the code is: " << CodeSum;
    std::cout << "\nPlease enter the code:" << std::endl;

    //Declaring Guess
    int GuessA, GuessB, GuessC;

    int GuessSum;
    int GuessProduct;

    //Waiting for player input
    std::cin >> GuessA >> GuessB >> GuessC;

    GuessSum = GuessA + GuessB + GuessC;
    GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum
        && GuessProduct == CodeProduct)
    {
        std::cout << "Congrats!! Moving on to the next level" << std::endl;
    }
    else
    {
        std::cout << "Try again! :(" << std::endl;
    }

    return 0;
}

bool PlayGame(int LevelDifficulty)
{

}
