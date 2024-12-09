// Source is for defining

// You have to include the header
// "" are for our own stuff
// <> are for standerd library stuff

#include "Player.h"
#include <iostream>

// Initialize our Variables


Player::Player() : m_xp(0)
{
	
}

//This is the slower way 

//Player::Player() 
//{
	// Doing this is slower

	/*m_name = "Player";
	m_health = 100;
	m_xp = 0;
	m_level = 1;*/
//}

// Do this if not initalized in the header
// //Initalize our deconstructor 
//Player::~Player()
//{
//	
//}

void Player::TakeDamage(float damage)
{
	if (damage <= 0) return;

	SetHealth(GetHealth() - damage);
	if (GetHealth() < 0)
		SetHealth(0);
}

void Player::Heal(float health)
{
	if (health <= 0) return;

	SetHealth(GetHealth() + health);
	

}

void Player::AddXP(float amount)
{
	if (amount <= 0) return;
	m_xp += amount;

	// level up at
	while (m_xp >= 100)
	{
		// Keep extra xp
		m_xp -= 100;
		SetLevel(GetLevel() + 1);
		
	}
}

void Player::PrintStats()
{
	std::cout << "Name:   " << GetName() << "\n";
	std::cout << "Health: " << GetHealth() << "\n";
	std::cout << "XP:     " << m_xp << "\n";
	std::cout << "Level:  " << GetLevel() << "\n";
	
}
