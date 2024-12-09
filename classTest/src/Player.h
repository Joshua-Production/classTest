// Header is for declaring
// this is only for header files
#pragma once
#include "Character.h"

class Player : public Character
{
	// In C++ you public a section 
public:
	// Constructor 
	Player();
	// Destructor 
	// adding = default is for neatness
	~Player() = default;
	
	void TakeDamage(float damage) override;
	void Heal(float health);
	void AddXP(float amount);
	void PrintStats() override;


	// Reason for only getting is because we will make funtions 
	// Getters will always be const
	
	float GetXp() const { return m_xp; }
	

private:
	//  all privates start with m_ 
	
	float m_xp;
	
};