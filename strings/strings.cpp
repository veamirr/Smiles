#include <string>
#include <iostream>
using namespace std;

void removeSpaces(char* str)
{
    int count = 1;

    for (int i = 1; str[i]; i++)
    {
        if (str[i] != ' ')
            str[count++] = str[i];
        else if (str[i - 1] != ' ' && str[i] == ' ')
        {
            str[count++] = str[i];
        }
    }
                                  
    str[count] = '\0';
}

void removeSmile(char* str)
{
    int count = 2;


    for (int i = 2; str[i]; i++)
    {
        if (str[i] == ')' && str[i - 1] == '-' && str[i - 2] == ':')
        {
            count = count - 2;
        }
        else
        {
            str[count++] = str[i];
        }
    }

    str[count] = '\0';
}

void removeSmiles(char* str)
{
    int count = 2;


    for (int i = 2; str[i]; i++)
    {
        int j = count;
        
        if (str[i] == ')' && str[j - 1] == '-' && str[j - 2] == ':')
        {
            count = count - 2;
        }
        else
        {
            str[count++] = str[i];
        }
    }

    str[count] = '\0';
}

int main()
{
    char str[] = ":-)fgh:-) gh   hjkl::-)-)))) fsdv:::-))-))     kdwc: - )";
    removeSpaces(str);
    removeSmiles(str);
    cout << str;
    return 0;
}

