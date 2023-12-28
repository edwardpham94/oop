#include"function.h"

float Composite::GetSize() {
	float totalSize = 0;
	for (int i = 0; i < components.size(); i++)
		totalSize += components[i]->GetSize();
	return totalSize;
}

void Composite::AddComponent(Component* iComp) {
	components.push_back(iComp);
}


void Composite::RemoveComponent(Component* iComp) {
	for (int i = 0; i < components.size(); i++) {
		if (components[i] == iComp) {
			components.erase(components.begin() + i);
		}
	}
}

Composite::~Composite() {
	for (Component* obj : components)
		delete obj;
	components.clear();
}

int getOption(string type) {
	if (type == "File") return 1;
	else if (type == "Folder") return 2;
	else return 3;
}

void Composite::inputComponent() {
	cout << "Enter the number of file/folder : ";
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		string type;
		cout << "Enter the type of file : ";
		getline(cin, type);
		switch (getOption(type))
		{
			case 1: {
				Component* newfile = new Leaf;
				newfile->inputComponent();
				this->AddComponent(newfile);
				break;
			}
			case 2: {
				Component* newfile = new Composite;
				newfile->inputComponent();
				this->AddComponent(newfile);
				break;
			}
			case 3:
				return;
		}
	}
}

void Composite::outputComponent() {
	cout << "\n***** Composite Infor *****\n";
	for (int i = 0; i < components.size(); i++) {
		Component* temp = components[i];
		cout << "Name : " << temp->GetName() << endl;
		cout << "Size : " << temp->GetSize() << endl;
	}
}
