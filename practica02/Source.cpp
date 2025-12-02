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
		cout << "Elephant eats grass" << endl;
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
	void Init()
	{
		Herbivores::Init();
		cout << "Enter the speed: ";
		cin >> speed;
	}
	void Print()
	{
		cout << "-------Rabit-------" << endl;
		Herbivores::Print();
		cout << "Speed: " << speed << endl;
		cout << "-------------------" << endl;
	}
	void Eat()
	{
		cout << "Rabit eats hay" << endl;
	}
	void Move()
	{
		cout << "Rabit quickly moves" << endl;
	}
};

class Giraffe :public Herbivores
{
	double lengthNeck;
public:
	Giraffe() {}
	Giraffe(double w, double l, int p, int a, string m, string wPAE, int hME, double lN)
		:Herbivores(w, l, p, a, m, wPAE, hME)
	{
		lengthNeck = lN;
	}
	void Init()
	{
		Herbivores::Init();
		cout << "Enter the length of neck: ";
		cin >> lengthNeck;
	}
	void Print()
	{
		cout << "-------Giraffe-------" << endl;
		Herbivores::Print();
		cout << "Length of neck: " << lengthNeck << endl;
		cout << "---------------------" << endl;
	}
	void Eat()
	{
		cout << "Giraffe eats leaves" << endl;
	}
	void Move()
	{
		cout << "Giraffe is starting to move" << endl;
	}
};

class Ñarnivores :public Animal
{
protected:
	string whoAreEat;
	double biteForce;
public:
	Ñarnivores() {}
	Ñarnivores(double w, double l, int p, int a, string m, string wAE, double bF) :Animal(w, l, p, a, m)
	{
		whoAreEat = wAE;
		biteForce = bF;
	}
	virtual void Init()
	{
		Animal::Init();
		cout << "Which animals it eats: ";
		cin >> whoAreEat;
		cout << "Enter bite of the force: ";
		cin >> biteForce;
	}
	virtual void Print()
	{
		Animal::Print();
		cout << "Which animals it eats: " << whoAreEat << endl;
		cout << "Bite of the force: " << biteForce << endl;
	}
	virtual void Eat() = 0;
	virtual void Move() = 0;
	virtual void Fly() = 0;
};

class Wolf :public Ñarnivores
{
	int numberOfWolvesInPack;
public:
	Wolf() {}
	Wolf(double w, double l, int p, int a, string m, string wAE, double bF, int nOW)
		:Ñarnivores(w, l, p, a, m, wAE, bF)
	{
		numberOfWolvesInPack = nOW;
	}
	void Init()
	{
		Ñarnivores::Init();
		cout << "Enter the number of wolves in pack: ";
		cin >> numberOfWolvesInPack;
	}
	void Print()
	{
		cout << "-------Wolf-------" << endl;
		Ñarnivores::Print();
		cout << "Number of wolves in pack: " << numberOfWolvesInPack << endl;
		cout << "------------------" << endl;
	}
	void Eat()
	{
		cout << "Wolf eats sheep" << endl;
	}
	void Move()
	{
		cout << "Wolf is starting to run" << endl;
	}
	void Fly()
	{
		cout << "Wolf cant fly" << endl;
	}
};

class Eagle :public Ñarnivores
{
	double wingspan;
public:
	Eagle() {}
	Eagle(double w, double l, int p, int a, string m, string wAE, double bF, double wS)
		:Ñarnivores(w, l, p, a, m, wAE, bF)
	{
		wingspan = wS;
	}
	void Init()
	{
		Ñarnivores::Init();
		cout << "Enter the wingspan: ";
		cin >> wingspan;
	}
	void Print()
	{
		cout << "-------Eagle-------" << endl;
		Ñarnivores::Print();
		cout << "Wingspan: " << wingspan << endl;
		cout << "-------------------" << endl;
	}
	void Eat()
	{
		cout << "Eagle eats rabit" << endl;
	}
	void Move()
	{
		cout << "Eagle cant move" << endl;
	}
	void Fly()
	{
		cout << "Eagle flies" << endl;
	}
};

class Shark :public Ñarnivores
{
	string color;
public:
	Shark() {}
	Shark(double w, double l, int p, int a, string m, string wAE, double bF, string c)
		:Ñarnivores(w, l, p, a, m, wAE, bF)
	{
		color = c;
	}
	void Init()
	{
		Ñarnivores::Init();
		cout << "Enter the color: ";
		cin >> color;
	}
	void Print()
	{
		cout << "-------Shark-------" << endl;
		Ñarnivores::Print();
		cout << "Color: " << color << endl;
		cout << "-------------------" << endl;
	}
	void Eat()
	{
		cout << "Shark eats fish" << endl;
	}
	void Move()
	{
		cout << "Shark quickly swims" << endl;
	}
	void Fly()
	{
		cout << "Shark cant fly" << endl;
	}
};

int main()
{
	Herbivores* ptr = nullptr;
	Ñarnivores* ptr2 = nullptr;

	int choice = 0;
	cout << "1)Enter information about elephant" << endl;
	cout << "2)Enter information about rabit" << endl;
	cout << "3)Enter information about giraffe" << endl;
	cout << "4)Enter information about wolf" << endl;
	cout << "5)Enter information about eagle" << endl;
	cout << "6)Enter information about shark" << endl;
	cout << "Your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		ptr = new Elephant;
		ptr->Init();
		ptr->Print();
		ptr->Eat();
		ptr->Move();
		break;
	case 2:
		ptr = new Rabit;
		ptr->Init();
		ptr->Print();
		ptr->Eat();
		ptr->Move();
		break;
	case 3:
		ptr = new Giraffe;
		ptr->Init();
		ptr->Print();
		ptr->Eat();
		ptr->Move();
		break;
	case 4:
		ptr2 = new Wolf;
		ptr2->Init();
		ptr2->Print();
		ptr2->Eat();
		ptr2->Move();
		break;
	case 5:
		ptr2 = new Eagle;
		ptr2->Init();
		ptr2->Print();
		ptr2->Eat();
		ptr2->Fly();
		break;
	case 6:
		ptr2 = new Shark;
		ptr2->Init();
		ptr2->Print();
		ptr2->Eat();
		ptr2->Move();
		break;
	default:
		cout << "Incorrect operation!" << endl;
		break;
	}

	delete ptr;
	delete ptr2;
}