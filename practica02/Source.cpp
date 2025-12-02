#include <iostream>
using namespace std;

class Animal
{
protected:
	double weight;
	double length;
	int population;
	int age;
	string mainLand;
public:
	Animal() {}
	Animal(double w, double l, int p, int a,string m)
	{
		weight = w;
		length = l;
		population = p;
		age = a;
		mainLand = m;
	}
	void Init()
	{
		cout << "Enter the weight: ";
		cin >> weight;
		cout << "Enter the length: ";
		cin >> length;
		cout << "Enter the population: ";
		cin >> population;
		cout << "Enter the age: ";
		cin >> age;
		cout << "Enter the mainLand: ";
		cin >> mainLand;
	}
	void Print()
	{
		cout << "Weight: " << weight << endl;
		cout << "Length: " << length << endl;
		cout << "Population: " << population << endl;
		cout << "Age: " << age << endl;
		cout << "Main land: " << mainLand << endl;
	}
	virtual void Eat() = 0;
	virtual void Move() = 0;
};

class Herbivores :public Animal
{
protected:
	string whichPlantAreEat;
	int howMuchEat;
public:
	Herbivores() {}
	Herbivores(double w, double l, int p, int a, string m, string wPAE, int hME) :Animal(w, l, p, a,m)
	{
		whichPlantAreEat = wPAE;
		howMuchEat = hME;
	}
	virtual void Init()
	{
		Animal::Init();
		cout << "Which plants it eats: ";
		cin >> whichPlantAreEat;
		cout << "How much it eat: ";
		cin >> howMuchEat;
	}
	virtual void Print()
	{
		Animal::Print();
		cout << "Which plants it eats: " << whichPlantAreEat << endl;
		cout << "How much it eat: " << howMuchEat << endl;
	}
	virtual void Eat() = 0;
	virtual void Move() = 0;
};

class Elephant :public Herbivores
{
	double lengthTrunk;
public:
	Elephant() {}
	Elephant(double w, double l, int p, int a, string m, string wPAE, int hME, double lT)
		:Herbivores(w, l, p, a, m, wPAE, hME)
	{
		lengthTrunk = lT;
	}
	void Init()
	{
		Herbivores::Init();
		cout << "Enter the length of trunk: ";
		cin >> lengthTrunk;
	}
	void Print()
	{
		cout << "-------Elephant-------" << endl;
		Herbivores::Print();
		cout << "Length of trunk" << lengthTrunk << endl;
		cout << "----------------------" << endl;
	}
	void Eat()
	{
		cout << "Elephant eats" << endl;
	}
	void Move()
	{
		cout << "Elephant slowly moves" << endl;
	}
};

class Rabit :public Herbivores
{
	double speed;
public:
	Rabit() {}
	Rabit(double w, double l, int p, int a, string m, string wPAE, int hME, double s)
		:Herbivores(w, l, p, a, m, wPAE, hME)
	{
		speed = s;
	}

};


//class Ñarnivores :public Animal
//{
//protected:
//	string whoAreEat;
//
//public:
//
//};


int main()
{
	Herbivores* ptr = nullptr;
	//Ñarnivores* ptr = nullptr;

	int choice = 0;
	cout << "1)Enter information about elephant" << endl;
	cout << "Your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		ptr = new Elephant;
		ptr->Init();
		break;
	case 2:
		/*animal = new Penguin;
		animal->Init();
		break;*/
	case 3:
		/*animal = new Parrot;
		animal->Init();
		break;*/
	case 4:
		/*animal = new Shark;
		animal->Init();
		break;*/
	default:
		cout << "Incorrect operation!" << endl;
		break;
	}

	ptr->Print();
	ptr->Eat();
	ptr->Move();

	delete ptr;
}