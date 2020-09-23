//open.kattis.com/problems/modulo
//CPU: 0.00s

using namespace std;
#include <iostream>

int array[42];

int main(void)
{
    int total = 0, new_num;

    for(int i = 0; i < 10; i++)
    {
        cin >> new_num;
        array[new_num % 42] = 1;
    }
    
    for(int i = 0; i < 42; i++)
    {
        if(array[i] == 1)
            total++;
    }

    cout << total << endl;

    return 0;
}