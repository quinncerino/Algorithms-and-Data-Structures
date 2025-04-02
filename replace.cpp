#include<iostream>
using namespace std;


int main()
{

    char s[10001];
    char c1, c2;

    cin.getline(s, 10001);

    cin.get(c1);

    cin.ignore((numeric_limits<streamsize>::max)(), '\n');

    cin.get(c2);

    cin.ignore((numeric_limits<streamsize>::max)(), '\n');

    if (c1 >= 32 && c1 <= 126 && c2 >= 32 && c2 <= 126)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == c1)
            {
                s[i] = c2;
            }
        }
    }


    cout << s;

    return 0;
}