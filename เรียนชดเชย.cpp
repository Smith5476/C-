#include <iostream>
#include <string>
using namespace std;
int main()
{
	float H,W,age,BMI;
	string gender;
	cout<<"enter H:";
	cin>>H;
	cout<<"enter W:";
	cin>>W;
	cout<<"enter gender:";
	cin>>gender;
	cout<<"enter age:";
	cin>>age;
	BMI =  W / ((H/100 * H/100)) ;

	if ((BMI>= 16)&&(BMI < 18.5))
    cout << "underweight\n";
	else if ((BMI >= 18.6 )&&(BMI <25))
    cout << "Normal\n";
	else if ((BMI >= 26 )&&(BMI <30))
    cout << "overweight\n";
	else if ((BMI >= 31 )&&(BMI <46))
    cout << "obeslily\n"; 
    system("pause");
    return (0);



}



 