#include <iostream>

int main();// statement main() func

namespace Layer2{
    namespace Layer1
    {
        class PrivateClass
        {
        private:
            static void print() { std::cout << "I'm a private func"; }
            friend int ::main();
        };
    }
}

int main()
{
    Layer2::Layer1::PrivateClass::print();
}