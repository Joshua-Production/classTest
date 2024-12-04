// Source is for defining

// You have to include the header
// "" are for our own stuff
// <> are for standerd library stuff

#include "Player.h"
#include <iostream>

// Initialize our Variables
Player::Player()
{
	m_name = "Player";
	m_health = 100;
	m_xp = 0;
	m_level = 1;
}

// Initalize our deconstructor
Player::~Player()
{

}

void Player::TakeDamage(float damage)
{
	if (damage <= 0) return;

	m_health -= damage;

	// clamp if damage is more than 0
	if (m_health < 0)
		m_health = 0;
}

void Player::Heal(float health)
{
	if (health <= 0) return;

	m_health += health;

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
		m_level++;
	}
}

void Player::PrintStats()
{
	std::cout << "Name:   " << m_name << "\n";
	std::cout << "Health: " << m_health << "\n";
	std::cout << "XP:     " << m_xp << "\n";
	std::cout << "Level:  " << m_level << "\n";
	
}
