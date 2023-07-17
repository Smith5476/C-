#include <iostream>
#include <string>
using namespace std;
int main()
{   string Name;
    int salary,sale;
    float com;
	cout<<"Enter Name:";
	cin>>Name;
	cout<<"Enter Salary:";
	cin>>salary;
	cout<<"Enter sale:";
	cin>>sale;
	cout<<"Enter Commission Percent:";
	cin>>com;
	cout<<"-----output-----\n";
	cout<< "Your Name = "<<Name <<endl;
	cout<< "Totel Revenue " <<salary +(sale *(com/100))<<endl;
	system("pause");
	return 0;
	
}