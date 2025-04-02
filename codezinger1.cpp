#include<iostream>
using namespace std;

const int MAXSIZE = 20;
const int ENDOFLIST = -1;

//Your program will be evaluated by this main method and several test cases.
int main()
{
    int array[MAXSIZE];    // Array to hold the number list
    int count;             // Number of elements in the array    

    // Start of your code
    count = 0;
    int newItem;

    do
    {
        if (count < MAXSIZE)
        {
            cin >> newItem;
            if (newItem != -1)
            {
                array[count] = newItem;
                count++;
            }
        }
    } while (newItem != -1);
    
    int j = count - 1;
    int temp;
    
    for (int i = 0; i <= (count / 2); i++)
    {
        temp = array[j];
        
        array[j] = array[i];
        array[i] = temp;
        
        j--;
    }
    
    
    
    // End of your code

    // Prints the array to the screen    
    for (int x = 0; x < count; x++)
    {
        cout << array[x] << " ";
    }

}