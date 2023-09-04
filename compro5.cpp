#include <iostream>
using namespace std;
void calcircle();
void calrec();
int main()
{  char Ch;
   do{ 
	   cout << "program calcuate of area."<<endl;
	   cout << "**************************"<<endl;
	   cout << "1. circle"<<endl;
	   cout << "2. rectangle"<<endl;
	   cout << "3. exit"<<endl;
	   cout << "choose menu :";
	   cin >> Ch;
       if(Ch == '1') calcircle();
	       else if(Ch =='2')calrec();
		       else if(Ch == '3') cout <<"exit"<<endl;
			       else cout<<"wrong menu"<<endl;
   }while(Ch !='3');
   system("pause");
	return(0);
}

void calcircle ()
{
    float Radius, Area, Circumference;
    cout << "Input radius : ";
    cin >> Radius;
    Area = 3.14f*Radius*Radius;
    Circumference = 2*3.14f*Radius;;
    cout << endl;
    cout << "Area of circle : " << Area << endl;
    cout << "Circumference of circle : " << Circumference << endl;
    cout << "Diameter of circle : " << (2*Radius) << endl;
}
void calrec()
{
	float l,w,a;
	cout<<"hight";
	cin>>l;
	cout<<"wide";
	cin>>w;
	a = l*w;
	cout<<"rectangle:"<<a<<endl;



}
