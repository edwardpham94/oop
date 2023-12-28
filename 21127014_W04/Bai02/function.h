#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Skill
{
protected:
	string skillName;
	unsigned int skillLevel;
public:
	Skill() : Skill("Magic", 10000){}
	Skill(string name, unsigned int level);
	Skill(const Skill& p);
	~Skill();
	string getSkillName();
	unsigned int getSkillLevel();
	void setSkillName(string name);
	void setSkillLevel(unsigned int level);
	void setAllSkill(string name, unsigned int level);
	void inputSkill();
	void outputSkill();
};


class Hero
{
protected:
	string heroName;
	unsigned int heroHealth;
	unsigned int heroMana;
	unsigned int heroLevel;
	vector<Skill*> skillList;
public:
	Hero();
	Hero(string name, unsigned int health, unsigned int mana, unsigned int level, vector<Skill*> list);
	Hero(const Hero& temp);
	~Hero();
	string getHeroName();
	unsigned int getHeroHealth();
	unsigned int getHeroMana();
	unsigned int getHeroLevel();
	vector<Skill*> getHeroSkill();
	void setHeroName(string name);
	void setHeroHealth(int n);
	void setHeroMana(int n);
	void setHeroLevel(int n);
	void setHeroSkill(vector<Skill*> list);
	void inputHero();
	void outputHero();
	void cutSkill(const int& n); 
	void searchSkill();
};

void printSkillList(vector<Skill*> list);
vector<Skill*> listOfSkill();