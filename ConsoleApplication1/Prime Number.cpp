#include <iostream>

using namespace std;



string is_prime(int num = 0) {

    char again = 'y';
	

    cout << "Start? y/n: ";
    cin >> again;
    
    while (again == 'y' or again == 'Y') {

        cout << "Enter a number: ";
        cin >> num;


        if (num == 2 || num == 3 || num == 5 || num == 7)
        {
            cout << " " << num << " Is a Prime Number \n";
            
        }
        else if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0 && num % 7 != 0)
        {
            cout << " " << num << " Is a Prime Number \n";
            
        }
        else
        {
            cout << " " << num << " Is Not a Prime Number \n";
           
        }
        cout << "Start again? y/n: ";
        cin >> again;
    }
    
	return 0;
}

int main()
{
	cout << is_prime();
	
}