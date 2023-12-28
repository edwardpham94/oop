#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Component {
protected:
	string name;
	float size;
public:
	Component() {
		name = "A";
		size = 1;
	}
	
	virtual string GetName() {
		return name;
	}

	virtual float GetSize() {
		return size;
	}

	bool operator == (Component* ifile) {
		if (ifile->GetName() == name && ifile->GetSize() == size)
			return true;
		return false;
	}
	virtual void inputComponent() = 0;

	virtual void outputComponent() = 0;

	virtual void AddComponent(Component* ifile)
	{
	}
	virtual void RemoveComponent(Component* ifile)
	{
	}
	virtual ~Component()
	{
	}
};


class Composite : public Component {
	vector<Component*> components;
public:
	string GetName() {
		return name;
	}

	float GetSize();

	void AddComponent(Component* iComp);

	void RemoveComponent(Component* iComp);
	
	void inputComponent();

	void outputComponent();

	~Composite();
};



class Leaf : public Component {
public:
	string GetName();

	float GetSize();

	void inputComponent();

	void outputComponent();

	~Leaf() {}
}; 