#include <iostream>
#include <iomanip>
using namespace std;
char chr;

int main()
{	
	int max_value;
	int number; 
	int guess;
	char answer;
	unsigned short response = 0;
	bool menuQuit == false;

	while (menuQuit == false)
	{
		do
		{
			cout << "Press 1 to play a game\n"
			cout << "Press 2 to change the max number\n"
			cout << "Press 3 to quit\n"
			
			cin >> response;
			cout << "\n";
		}
		 while (response > 3);
		
		 switch (response)
      	 {
      	 	case 1:

      	 	cout<<"Enter a number between 1 and 10"<<endl;
			
			cin>>guess;
      	 	
      	 	do

      	 	{
				if (number>guess);
				{
					cout<<"Too low try again"<<endl;
				}
      	 					
				else if(number==guess)
				{

				cout<<"Congratualtions!!You Won!"<<endl;

				return 0;
				
				}	

				else //(number<guess)

				{
					cout<<"Too high try again"<<endl;
				}
			} while (gues != number); //end do while
		
			case 2:
			if ( max_value < 0 || max_value > 10 )
				{
				
				cout << "Change the number up to 10, please only enter positive numbers";
				
				cin >> max_value;
				
				cin.ignore(9,'\n');
				
				return 1;
				}
			
		}		
			
			case 2:


