#include <iostream>

using namespace std;

int main()
{
	int i;
	int km = 60; 
	
	cout << "#\t\tKilometers\t\tMiles" << endl; 
	for (i=0;i<10;i++)
	{
		cout << i+1 << "\t\t" << km << " km/hr\t\t" << km*0.6241 << " miles/hr" << endl;
		km += 5;
	}
}
