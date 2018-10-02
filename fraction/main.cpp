#include <iostream>
#include <cassert> // assert()

#include "fraction.h"



int main( void )
{
   
   Fraction a;
   Fraction b{1,2};
   Fraction c{2,1};
   Fraction d{15,4};

   std::cout << b << std::endl;
  // std::cout << b.get_decimalvalue() << " " << std::endl;

   std::cout << "Is proper? ";
   if(b.isProper() == true){
    std::cout << "True" << " " << std::endl;
   }
   else {
    std::cout << "False" << " " << std::endl;
   }
   
    std::cout << "-------------------------" << std::endl;
    std::cout << c << std::endl;

    std::cout << "Is proper? ";
   if(c.isProper() == true){
    std::cout << "True" << " " << std::endl;
   }
   else {
    std::cout << "False" << " " << std::endl;
   }

   std::cout << "Is zero? ";
    if(c.isZero() == true){
    std::cout << "True" << " " << std::endl;
   }
   else {
    std::cout << "False" << " " << std::endl;
   }


   int restC = c.makeProper();
   std::cout << c << std::endl;

    std::cout << "Is proper? ";
   if(c.isProper() == true){
    std::cout << "True" << " " << std::endl;
   }
   else {
    std::cout << "False" << " " << std::endl;
   }

   std::cout << "Is zero? ";
    if(c.isZero() == true){
    std::cout << "True" << " " << std::endl;
   }
   else {
    std::cout << "False" << " " << std::endl;
   }



   std::cout << "-------------------------" << std::endl;
   std::cout << d << std::endl;

    std::cout << "Is proper? ";
   if(d.isProper() == true){
    std::cout << "True" << " " << std::endl;
   }
   else {
    std::cout << "False" << " " << std::endl;
   }

   int restD = d.makeProper();


   std::cout << d << std::endl;

    std::cout << "Is proper? ";
   if(d.isProper() == true){
    std::cout << "True" << " " << std::endl;
   }
   else {
    std::cout << "False" << " " << std::endl;
   }


    return 0;
}
