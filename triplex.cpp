#include <iostream>
#include <ctime>

bool PlayGame(int LevelDifficulty);

int main()
{
    int Level = 1;

    //Print Introduction
    std::cout << "You are secret agent trying to crack all the codes to prevent a disaster" << std::endl;
    std::cout << "There are three numbers in the code" << std::endl;

    while (Level <= 5)
    {
        srand(time(NULL));

        if (PlayGame(Level))
        {
            Level++;
            if (Level <= 5)
            {
                std::cout << "Congrats!! Moving on to the next level" << std::endl;
            }
            else
            {
                std::cout << "You have finished the game!" << std::endl;
            }
        }
    }

    return 0;
}

bool PlayGame(int LevelDifficulty)
{
    //Declaring Variables
    int CodeA = rand() % 4 + LevelDifficulty;
    int CodeB = rand() % 4 + LevelDifficulty;
    int CodeC = rand() % 4 + LevelDifficulty;

    int const CodeSum = CodeA + CodeB + CodeC;
    int const CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "Level:" << LevelDifficulty << std::endl; 
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
        return true;
    }
    std::cout << "Try again! :(" << std::endl;
    return false;
}
