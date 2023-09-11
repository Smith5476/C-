#include <iostream>
#include <iomanip>
using namespace std;
float update_balance(int command, float dollars, float balance)
{   if(command = 1)
    {   balance = balance - dollars;
    }else if(command == 2)
    {   balance = balance + dollars;
	}else {
		cout<<"you input wrong menu"<<endl;
	}
    return(balance);
}
int main()
{   float balance=10000.00,amount;
    int command;
	cout<<"exit with 0"<<endl;
	do{ cout<<"your balance ="<<fixed<<setprecision(2)<<balance<<endl;
	    cout<<"input command 1 withdraw 2deposit  : ";
		cin>>command;
		if(command = 0) break;
		cout<<"input amount : ";
		cin>>amount;
		balance = update_balance(command,amount,balance);

	}while(command!=0);
	system("pause");
	return 0;
}
