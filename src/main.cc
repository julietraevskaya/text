#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

int main()
{
    string text;
    int i = 0;
    int count = 0;
    while(getline(cin, text))
    {
        if (!text.empty())  
    {
         while(text[i] != '\0')
         {
             if(text[i] == ' ')
                count++;
             i++;    
        }
        count++;
    }
    cout << count << endl;
    }
    
    return(0);    
}