// Header is for declaring
// this is only for header files
#pragma once

class Player
{
	// In C++ you public a section 
public:
	// Constructor 
	Player();
	// Destructor 
	~Player();
	
	void TakeDamage(float damage);
	void Heal(float health);
	void AddXP(float amount);
	void PrintStats();


	// Reason for only getting is because we will make funtions 
	// Getters will always be const
	const char* GetName() const { return m_name; }
	void SetName(const char* name) { m_name = name; }
	float GetHealth() const{ return m_health; }
	float GetXp() const { return m_xp; }
	int GetLevel() const { return m_level; }

private:
	//  all privates start with m_ 
	const char* m_name;
	float m_health;
	float m_xp;
	int m_level;
};