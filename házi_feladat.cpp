#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    const int PASSWORD_LENGTH = 10; 
    srand(time(0)); 
    string password = ""; 

   
    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        int type = rand() % 3; 
        char ch;

        
        switch (type)
        {
            case 0: 
                ch = 'A' + rand() % 26;
                break;
            case 1: 
                ch = 'a' + rand() % 26;
                break;
            case 2:  
                ch = '0' + rand() % 10;
                break;
            case 3: 
                ch = "!@#$%^&*"[rand() % 8];
                break;
        }

        password += ch; // Add the generated character to the password
    }

    //print
    cout << "Your random password is: " << password << endl;

    return 0;
}
