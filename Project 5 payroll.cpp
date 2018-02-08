/*
     Name:      Krishna rana
     Course:    CIS 160 ME1
     Date:      05/04/2016
     Program:   Payroll
     Description:  This program calculates the pay of an employee from the given input.
     			The input consists of name ,hours worked and hourly rate. The output of
				the program is the name, hour's worked and rate and the total gross pay.
*/
#include <iostream>//Standard Input/output streams libary
#include <iomanip>// Header providing parametric manipulators

using namespace std;
// Function prototype
void getdata(string&,float&,float&);
float wages(float,float);
void print(string, float, float);
//Structure Defination
struct Payroll
{ 
	//Structure members, fields
	string emp_name;
  	float hours;
  	float payrate;	
};
//Main() Function Defination
//This function runs the whole program with step by step intruction written below.
//main() has calls and parameters of other function in the program.
int main()
{	
	//Local Definations/ Declarlations
	//Initialization of structure Payroll value.
	Payroll p;
	//Function Calls
	getdata(p.emp_name,p.hours,p.payrate);
	print(p.emp_name,p.hours,p.payrate);
	
	return 0;
}
//getdata() Function Defination
//This function is used to get input from the user.
//The input consist of Name, hours worked, and hourly rate.
//It's return type is null, but it passes the value of Name, hours, and payrate via reference.
//It sends the value to main() and main() stores it in structure Payroll for further use.
void getdata(string& n,float& h,float& r)
{
	//Local Definations/ Declarlations
	//Input Section to get name, hours and payrate.
	cout<<"##Provide the Required information below##"<<endl;
	cout<<"------------------------------------------"<<endl;
	//Get's the Employee name
	cout<<" Enter the employee name: ";
	getline(cin,n);
	//Get's the hours worked
	cout<<" Enter the Hours worked: ";
	cin>>h;
	//Get's the hourly pay rate 
	cout<<" Enter the Hourly rate: ";
	cin>>r;
}
//Wages() function Defination
//This function is a sub-function of print().
//It calculates the grosspay with hours and payrate.
//It has a return type of float, it return the grosspay value to print() by value.
float wages(float h,float r)
{
	//Local Defination/Declaration
	float grosspay;
	//formula to calculate the total wages(grosspay).
	grosspay = (h * r);
	//Returns grosspay to print().
	return grosspay;
}
//Print() function Defination
//This function is the output section of the program
//It output's the Name, hours, payrate and total wages(grosspay) for the employee.
//Name, hours, and payrate are passed by value.
//it's return type is null.
void print(string n,float h, float r)
{
	//Local Definations/ Declarlations
	float grosspay;
	//Function Calls
	grosspay = wages(h,r);
	//output heading for the program
	//setprecision(2) prints answers in 2 decimal spaces.
	cout << fixed << showpoint << setprecision(2);
	cout<<endl<<endl;
	cout<<"****************************************"<<endl;
	cout<<"Employee Name: "<<setw(20)<<n<<endl<<endl;
	cout<<"Hours Worked: "<<setw(21)<<h<<endl;
	cout<<"Hourly Rate: "<<setw(15)<<"$"<<setw(7)<<r<<endl<<endl;
	cout<<"Total Wages: "<<setw(15)<<"$"<<setw(7)<<grosspay<<endl;
	cout<<"****************************************"<<endl;
}
