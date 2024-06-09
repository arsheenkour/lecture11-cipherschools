//while-loop
#include<iostream>
using namespace std;
int main()
{
	int i=1;//initialization
	while(i<101)//condition
	{
		cout<<i<<" ";
		i++;//update
	}
}
*/
//use of break statement
//==-->evaluate operator
//=-->assignment operator
#include<iostream>
using namespace std;
int main()
{
	int i=100;
	int input;//initialization
	for(i=1;i<101;i++)//condition
	{
		cin>>input;
		if(input==65)//only takes plcae if input is 65
		{
		cout<<"congrats you have guesses correct";
		break;	
		}
		
	}
}
