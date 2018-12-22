//..hoppar en mapp tillbaka från vart den här filen ligger, sedan sökväg därifrån
#include "../include/Num1.h" 
//#include "/home/lakan/Programming/Statemachines/include/Num.h"

Num1::Num1():num1(0) {} 

Num1::Num1(int n): num1(n) {} 

int Num1::getNum() 
{ 
 return num1; 
} 