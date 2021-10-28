#include <iostream>

int& GetValue()
{
	static int value = 10;
	return value;
} 

void SetValue(const int& value)
{
	std::cout << value;
}

void PrintName(std::string& name)
{
	std::cout << "Left Value : " << name << std::endl;
}

void PrintName(std::string&& name)
{
	name += " and You can even change it in this function!!!!!";
	std::cout << "Right Value : " << name << std::endl;
}

int main()
{
	int i = GetValue();
	int a = i;

	GetValue() = 5;// error

	//SetValue(i);// this is works as we all know
	//SetValue(10);

	std::string lvalue = "this is a lvalue";

	PrintName(lvalue);
	PrintName("this isn't a lvalue, but a rvalue");
}