#include <iostream>

class Singleton
{
	int data{0};
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
};

Singleton* Singleton::instance_ptr = nullptr;

int main()
{
	Singleton* ptr1 = Singleton::get_instance();
	Singleton* ptr2 = Singleton::get_instance();

	std::cout << ptr1 << std::endl;
	std::cout << ptr2 << std::endl;

	delete ptr1;
}
