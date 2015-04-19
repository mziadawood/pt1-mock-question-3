#include <iostream>
#include"Question3.cpp"
using namespace std;



int main()
{
	Fraction b(2, 1);
	Fraction s(1, 1);

	int three = 3;

	if (b>s)
	{
		cout << "yes its greater";
	}

	Fraction test1 = b.add(b, three);
	Fraction test2 = b.add(three, b);



	cout << "test 1   "; test1.print();
	cout << "test 2    "; test2.print();




	system("pause");


}