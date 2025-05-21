#include <iostream>

class Singleton
{
	int data = 5;
	// this pointer point to only one object (itself)
	static Singleton* instance_ptr;

	Singleton() = default;	// move constructor to private section

public:
	Singleton(const Singleton&) = delete;
	~Singleton() { instance_ptr = nullptr; }

	// create object once
	static Singleton* get_instance()
	{
		if(instance_ptr == nullptr)
		{
			instance_ptr = new Singleton();
		}
		return instance_ptr;
	}

	void print_data()
	{
		std::cout << data << std::endl;
	}
};

// need to define this variable for compile
Singleton* Singleton::instance_ptr = nullptr;

int main()
{
	Singleton* ptr1 = Singleton::get_instance();
	Singleton* ptr2 = Singleton::get_instance();

	std::cout << ptr1 << std::endl;
	std::cout << ptr2 << std::endl;

	ptr1->print_data();

	delete ptr1;
}
