#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

int main()
{
    string text;
    int i = 0;
    int count = 0;
    getline(cin, text);
    char const* s = text.c_str();
    if (s[i] == '\0')
         cout << count << endl;
    else    
     {
         while(s[i] != '\0')
         {
             if(s[i] == ' ')
            {
                count++;
                i++;
            }
            else
                i++;
        
        }
        count++;
        cout << count << endl;

    }

    return (0);
}