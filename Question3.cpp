///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

// ***** QUESTION 3 ******
// Question 3 has 3 parts
// 3.1 Using the MINIMAL "Fraction" class provided, overload the greater than operator to work with
//     objects of class Fraction as a NON-MEMBER FUNCTION.   You may modify the Fraction class to 
//     demonstrate friendship.  DO NOT USE FLOATING POINT MATH!!!
// 3.2 Overload two functions called "add" which take two arguements, an integer and a fraction (in 
//     either order) and return a fraction.  
// 3.3 create a driver program to test your overloaded > operators and your overloaded 

class Fraction {
private:
	int num;				// numerator;
	int denom;				// denominator;
public:
	Fraction(int n, int d) : num(n), denom(d) { };
	void print() { cout << num << "/" << denom; };

	friend bool operator>(Fraction a, Fraction b)
	{
		if ((a.num*b.denom) > (b.num*a.denom))
			return true;

		else return false;
	
	}

	Fraction add(int a, Fraction b)
	{
		Fraction c(0,0);

		c.num = (a*b.denom) + b.num;
		c.denom = b.denom;

		return c;

	}

	Fraction add(Fraction b,int a)
	{
		Fraction c(0, 0);

		c.num = (a*b.denom) + b.num;
		c.denom = b.denom;

		return c;

	}


};