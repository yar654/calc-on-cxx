#include <iostream>

int main()
{
   int a;
   int b;
   int c;
   std::cout << "calculator!" << std::endl;
   std::cout << "enter operation (|1 -- +|2 -- -|3 -- *|4 -- /|)" << std::endl;
   std::cout << "enter: ";
   std::cin >> a;
   std::cout << "enter first number" << std::endl;
   std::cout << "enter: ";
   std::cin >> b;
   std::cout << "enter second number" << std::endl;
   std::cout << "enter: ";
   std::cin >> c;
   if(a == 1)
   {
      std::cout << "anwer: " << b+c << std::endl;
   }
   else if(a == 2)
   {
      std::cout << "answer: " << b-c << std::endl;
   }
   else if(a == 3)
   {
      std::cout << "answer: " << b*c << std::endl;
   }
   else if(a == 4)
   {
      std::cout << "answer: " << b/c << std::endl;
   }
   return 0;
}
