// PokemonB_Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>
#include "Pokemon.h";

using namespace std;

int main()
{
    std::cout << "Starting PokeBlue..." << endl << endl;

    Pokemon* squirtle = new Pokemon(4, 45);
    cout << "Name: " << squirtle->getName() << endl;
    cout << "Level: " << squirtle->getLevel() << endl;
    cout << "HP: " << squirtle->getHP() << endl;
    cout << "Base HP: " << squirtle->getBaseStats() << endl;
    cout << "HP IV: " << squirtle->getHpIV() << endl;
    cout << "Nature: " << squirtle->getNature() << endl;
    cout << "Types: " << squirtle->getTypeOne() << ", " << squirtle->getTypeTwo() << endl;

    std::cout << "\nEvolving Squirtle..." << endl << endl;

    squirtle->evolve();
    cout << "Name: " << squirtle->getName() << endl;
    cout << "Level: " << squirtle->getLevel() << endl;
    cout << "HP: " << squirtle->getHP() << endl;
    cout << "Base HP: " << squirtle->getBaseStats() << endl;
    cout << "HP IV: " << squirtle->getHpIV() << endl;
    cout << "Nature: " << squirtle->getNature() << endl;
    cout << "Types: " << squirtle->getTypeOne() << ", " << squirtle->getTypeTwo() << endl;
    
    std::cout << "\nEvolving Wartortle..." << endl << endl;

    squirtle->evolve();
    cout << "Name: " << squirtle->getName() << endl;
    cout << "Level: " << squirtle->getLevel() << endl;
    cout << "HP: " << squirtle->getHP() << endl;
    cout << "Base HP: " << squirtle->getBaseStats() << endl;
    cout << "HP IV: " << squirtle->getHpIV() << endl;
    cout << "Nature: " << squirtle->getNature() << endl;
    cout << "Types: " << squirtle->getTypeOne() << ", " << squirtle->getTypeTwo() << endl;

};

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
