//Roxanne Tait
//22 FEB 2012

#include <iostream>
using namespace std;

int main()

{
	//variables for number, maximum integer & minimum integer
        	int number,
			min,
			max; 

       
		
	//header
	cout << "Enter several intergers then type -99 to receive the least & greatest values " << endl << endl;
	

	//user input	
	cout << "Enter several whole numbers: ";

		cin >> number;
		max = number; 
		min = number;

		
    	//first loop (do-while)
        do    
	{
		cin >> number;
                
	
		if (number == -99) //break loop if -99 is entered by user
                        break;
	//if-else loop
                
		if (number > max)
		(max = number);

                else if (number < min)
                (min = number);

       	 } while (number != -99 ); //number cannot be -99


	//output
        if( number == -99) //if -99 is entered, show results
		{
		cout << "    The greatest valuse listed is: " << max << endl; 
       		cout << "    The smallest value listed is: " << min << endl; 
		}
        return 0;
}