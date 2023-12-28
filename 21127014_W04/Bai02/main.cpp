#include"function.h"

int main() {

	////////// skill /////////
	Skill a;
	a.outputSkill();
	a.setSkillName("Walking");
	a.setSkillLevel(20);

	Skill b("Racing", 20);
	b.outputSkill();

	Skill c = b;
	c.outputSkill();

	c.inputSkill();
	c.outputSkill();

	cout << c.getSkillName() << endl;
	cout << c.getSkillLevel() << endl;

	///////// hero ///////////

	vector<Skill*> allSkill;
	Hero d;
	d.outputHero(); 
	d.setHeroName("Obs");
	d.setHeroHealth(20);
	d.setHeroLevel(5);
	d.setHeroMana(10);
	d.setHeroSkill(allSkill);
	d.outputHero();
	Hero e = d;
	e.outputHero();
	Hero f("Obs", 100, 5, 20, allSkill);
	cout << f.getHeroName() << endl;
	cout << f.getHeroHealth() << endl;
	cout << f.getHeroMana() << endl;
	cout << f.getHeroLevel() << endl;
	vector<Skill*> temp;
	temp = f.getHeroSkill();
	printSkillList(temp);

	f.searchSkill();
	f.cutSkill(2);
}