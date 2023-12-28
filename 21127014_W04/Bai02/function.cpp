#include"function.h"


// constructor
Skill::Skill(string name, unsigned int level) {
	this->skillName = name;
	this->skillLevel = level;
}

// copy constructor
Skill::Skill(const Skill& p) {
	this->skillName = p.skillName;
	this->skillLevel = p.skillLevel;
}

Skill::~Skill() {

}

string Skill::getSkillName() {
	return this->skillName;
}

unsigned int Skill::getSkillLevel() {
	return this->skillLevel;
}

void Skill::setSkillName(string name) {
	this->skillName = name;
}

void Skill::setSkillLevel(unsigned int level) {
	this->skillLevel = level;
}

void Skill::setAllSkill(string name, unsigned int level) {
	this->skillName = name;
	this->skillLevel = level;
}

void Skill::inputSkill() {
	cout << endl << "***** Enter Skill Information *****\n";
	cout << "Enter Skill Name : ";
	getline(cin, this->skillName);
	cout << "Enter Skill Level : ";
	cin.ignore();
	cin >> this->skillLevel;

}

void Skill::outputSkill() {
	cout << "Skill Name :" << this->skillName << endl;
	cout << "Skill Level : " << this->skillLevel << endl;
}

Hero::Hero() {
	this->heroName = "Pham Hong Gia Bao";
	this->heroHealth = 100;
	this->heroMana = 100;
	this->heroLevel = 94;
	Skill* temp = new Skill;
	this->skillList.push_back(temp);
}

Hero::Hero(string name, unsigned int health, unsigned int mana,
	unsigned int level, vector<Skill*> list) {
	this->heroName = name;
	this->heroHealth = health;
	this->heroMana = mana;
	this->heroLevel = level;
	this->skillList = list;
}

// copy constructor
Hero::Hero(const Hero& temp) {
	this->heroName = temp.heroName;
	this->heroHealth = temp.heroHealth;
	this->heroMana = temp.heroMana;
	this->heroLevel = temp.heroLevel;
	int number = temp.skillList.size();
	for (int i = 0; i < number; i++) {
		Skill* a = new Skill;
		a->setAllSkill(temp.skillList[i]->getSkillName(), temp.skillList[i]->getSkillLevel());
		this->skillList.push_back(a);
	}
}

Hero::~Hero() {
	int n = this->skillList.size();
	for (int i = 0; i < n; i++)
		delete skillList[i];
	this->skillList.clear();
}

string Hero::getHeroName() {
	return this->heroName;
}

unsigned int Hero::getHeroHealth() {
	return this->heroHealth;
}

unsigned int Hero::getHeroMana() {
	return this->heroMana;
}

unsigned int Hero::getHeroLevel() {
	return this->heroLevel;
}

void Hero::setHeroName(string name) {
	this->heroName = name;
}

void Hero::setHeroHealth(int n) {
	this->heroHealth = n;
}

void Hero::setHeroMana(int n) {
	this->heroMana = n;
}

void Hero::setHeroLevel(int n) {
	this->heroLevel = n;
}

vector<Skill*> Hero::getHeroSkill() {
	return this->skillList;
}

void Hero::setHeroSkill(vector<Skill*> list) {
	this->skillList = list;
}

void printSkillList(vector<Skill*> list) {
	int n = list.size();
	for (int i = 0; i < n; i++) {
		cout << "\nSkill No." << i + 1 << endl;
		cout << list[i]->getSkillName() << endl;
		cout << list[i]->getSkillLevel() << endl;
	}
}

void Hero::inputHero() {
	cout << endl << "***** Enter the Hero Information *****\n";
	cout << "Enter Hero Name : ";
	getline(cin, this->heroName);
	cout << "Enter Hero Health : ";
	cin.ignore();
	cin >> this->heroHealth;
	cout << "Enter Hero Mana : ";
	cin >> this->heroMana;
	cout << "Enter Hero Level : ";
	cin >> this->heroLevel;

	int number;
	cout << "Enter the number of skill : ";
	cin >> number;
	for (int i = 0; i < number; i++) {
		Skill* temp = new Skill;
		temp->inputSkill();
		this->skillList.push_back(temp);
	}
}

void Hero::outputHero() {
	cout << endl << "***** The Hero Information *****\n";
	cout << "Hero Name : " << this->heroName << endl;
	cout << "Hero Health : " << this->heroHealth << endl;
	cout << "Hero Mana : " << this->heroMana << endl;
	cout << "Hero Level : " << this->heroLevel << endl;
	int number = this->skillList.size();
	for (int i = 0; i < number; i++) {
		skillList[i]->outputSkill();
	}
}

void Hero::cutSkill(const int& n) {
	cout << endl << "\n***** Skill after cut *****\n";
	int number = this->skillList.size();
	if (n >= number) {
		this->skillList.clear();
		cout << "Nothing left!";
	}
	else {
		for (int i = 0; i < n; i++) {
			this->skillList.pop_back();
		}
	}
}

vector<Skill*> listOfSkill(){	
	vector<Skill*> allSkill;
	vector<string> skillName = { "Walking", "Running", "Racing", "Flying", "Killing", "Bashing"};
	vector<int> skillLevel = {10, 20, 30, 40, 50, 60 };
	
	for (int i = 0; i < 4; i++) {
		Skill* temp = new Skill;
		temp->setAllSkill(skillName[i], skillLevel[i]);
		allSkill.push_back(temp);
	}
	return allSkill;
}

void Hero::searchSkill() {
	cout << "*****\n Skill co the hoc duoc *****\n";
	vector<Skill*> allSkill = listOfSkill();
	int n = allSkill.size();
	for (int i = 0; i < n; i++) {
		if (allSkill[i]->getSkillLevel() > this->getHeroLevel()) {
			allSkill[i]->outputSkill();
			cout << endl;
		}
	}
}