#include <iostream>
#include <string>

using namespace std;

class Account
{
	public:
		Account(int);
		void Kredit(int);
		void debit (int);
		int getAccountBalance();
	private:
		int AccountBalance;
};
Account::Account(int Balance)
{
	if (Balance>=0)
	{
		AccountBalance=Balance;
	}
	else
	{
		AccountBalance=0;
		cout<<"saldo tidak valid"<<endl;
	}
}
void Account::Kredit(int Balance)
{
	AccountBalance=AccountBalance + Balance;
}
void Account::debit(int Balance)
{
	if(AccountBalance>=Balance)
	{
		AccountBalance=AccountBalance-Balance;
	}
	else
	{
		cout<<"jumlah debit melebihi saldo"<<endl;
	}
}
int Account::getAccountBalance()
{
	return AccountBalance;
}

int main()
{
	cout<<" Account" <<endl<<endl;
	
	cout<<endl;
	Account Account1(500000);
	Account Account2(400000);
	cout<< "saldo pertama akun 1 : Rp. "<< Account1.getAccountBalance()<<endl;
	cout<< "saldo pertama akun 2 : Rp. "<< Account2.getAccountBalance()<<endl;
	cout<<endl;	
	
	cout<<endl;
	Account1.Kredit(3000);
	Account2.Kredit(4000);
	cout<< "kredit akun 1 : Rp. 3000" <<endl;
	cout<< "kredit akun 2 : Rp. 4000" <<endl;
	
	cout<<endl<< "setelah kredit :" <<endl<<endl;
	cout<< "saldo setelah kredit akun 1 : Rp. "<< Account1.getAccountBalance()<<endl;
	cout<< "saldo setelah kredit akun 2 : Rp. "<< Account2.getAccountBalance()<<endl;
	cout<<endl;
	
	cout<<endl;
	Account1.debit(5000);
	Account2.debit(4000);
	cout<< "debit akun 1 : Rp. 5000" <<endl;
	cout<< "debit akun 2 : Rp. 4000" <<endl;
	
	cout<<endl<< "setelah debit :" <<endl<<endl;
	cout<< "saldo terakhir akun 1 : Rp. "<< Account1.getAccountBalance() <<",-"<<endl;
	cout<< "saldo terakhir akun 2 : Rp. "<< Account2.getAccountBalance() <<",-"<<endl;
	
}
