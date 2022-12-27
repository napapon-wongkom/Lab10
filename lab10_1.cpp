#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,nb,rpy,payment;
	int num=1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rpy;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;
	
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
	while(true) {
		double rpyint = (loan*rpy)/100.00;
		double total = loan + rpyint;
		if(total<payment){
			payment = total;
		}
		nb=total-payment;
		cout << fixed << setprecision(2);
		cout << setw(13) << left << num; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << rpyint;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << nb;
		cout << "\n";
		loan=nb;
		num++;
		if(nb==0){
			break;
		}
	}
		
	
	return 0;
}