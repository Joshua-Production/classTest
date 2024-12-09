#include <iostream>
// Only ever include the header
// Never include a cpp file if you have to you have errored somewhere
#include "Player.h"
#include "Enemy.h"
//
//class Item
//{
//
//};
//
//class Enemy
//{
//public:
//    Enemy() : m_healthPotion  (new Item())
//    {
//       
//    }
//    // Deconstructor is only for cleaning
//    ~Enemy()
//    {
//        delete m_healthPotion;
//
//        // also do this
//         /*m_healthPotion = nullptr;*/
//    }
//    /*Enemy() { std::cout << "Enemy Constructor" << std::endl; }
//    ~Enemy(){ std::cout << "Enemy Constructor" << std::endl;}*/
//
//private:
//    Item* m_healthPotion;
//
//
//};


int main()
{
//    std::cout << "Start" << std::endl;
//    Enemy* bob = nullptr;
//    bob = new Enemy();
//    
//    // Delete
//    delete bob;
//    std::cout << "End" << std::endl;
//    return 0;

    Enemy bob = Enemy();
    
        return 0;

    Player bobulus = Player();
    std::cout <<"Hello and welcone! \n" ;
    std::cout << "\n";
    // Get name
    std::cout << "What is your name??\n";
    std::cout << "> ";

    // Made an array that can read up to 512 long 
    char name[512];
    std::cin >> name;
    bobulus.SetName(name);

    bool shouldExitLoop = false;
    while (!shouldExitLoop)
    {
        system("cls");
        bobulus.PrintStats();
        std::cout << std::endl;
        std::cout << "Hello " << bobulus.GetName() << "! What would you like to do today?" << std::endl;
        std::cout << "1. Take 5 damage \n";
        std::cout << "2. Heal 5 damage \n";
        std::cout << "3. Add 17 xp\n";
        std::cout << "4. Quit\n";       
        std::cout << "> ";

        // Get input
        int input = 0;
        std::cin >> input;

        // Process input
        switch (input)
        {
        case 1:
            bobulus.TakeDamage(5);
            break;
            // break means dont go to the next choice
        case 2:
            bobulus.Heal(5);
            break;
        case 3:
            bobulus.AddXP(17);
            break;
        case 4:
            // when shouldExitLoop is true break
            shouldExitLoop = true;
                break;
        }
    } 
    return 0;
}
