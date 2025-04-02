#include<iostream>
using namespace std;

const int MAXSIZE = 10000;
const int ENDOFLIST = -1;

//Your program will be evaluated by this main method and several test cases.
int main()
{
    int result = -5;
    
    // Start of your code
    int array[MAXSIZE];
    int count = 0;
    int newItem;

    do
    {
        if (count <= MAXSIZE)
        {
            cin >> newItem;
            if (newItem != ENDOFLIST)
            {
                array[count] = newItem;
                count++;
            }
        }
    } while (newItem != ENDOFLIST);
    
    
    int occurrences = 0;
    int odd = 0;
    for (int i = 0; i < count; i++)
    {
        occurrences = 1;
        for (int j = count - 1; j >= 0; j--)
        {
            if (array[i] == array[j] && i != j)
            {
                cout << array[i] << " " << i << " " << array[j] << " " << j << " ";
                occurrences++;
                cout << occurrences << " " << endl;
            }
        }

        if (occurrences % 2 != 0)
        {
            odd++;
            cout << array[i] << " !" << endl;
        }
    }


    
    if (odd != 0)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
    
    
    // End of your code

    cout << result;
}