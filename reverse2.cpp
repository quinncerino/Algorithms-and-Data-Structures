#include<iostream>
using namespace std;

int main()
{
    char s[10001];
    char temp[10001];
    int store[10001];
    int index = 0;
    int length, lengthOfS;

    cin.getline(s, 10001);

    lengthOfS = strlen(s);

    store[index] = -1;
    index++;

    for (int i = 0; i < lengthOfS + 1; i++)
    {
        if (s[i] == ' ' || s[i] == '\0')
        {
            length = i; //amount of characters up until the space or null (not including it)
            //cout << "length: " << length << endl;
            store[index] = length;
            //cout << "stored in store: " << store[index] << endl;
            index++;
        }
    }
    //cout << "index: " << index << endl;
    /* 
    for (int i = index - 1; i >= 0; i--)
    {
        for (int k = 0; k < store[i] - store[i - 1]; k++)
        {
            temp[k] = s[store[i - 1] + 1 + k];
        }
    }
    */

    //store[index - 1]

    int place = 0;
    while(index - 2 >= 0)
    {
        int difference = store[index - 1] - store[index - 2] - 1;
        for (int i = 0 + place, k = store[index - 2] + 1; i < place + difference && k < store[index - 1]; i++, k++)
        {
            temp[i] = s[k];
            place = i + 1;
        }

        temp[place] = ' ';
        place++;

        //cout << "testing: " << temp << endl;
        index--;
    }
    
    for (int i = 0; i < place; i++)
    {
        s[i] = temp[i];
    }

    cout << s << endl;
}