//open.kattis.com/problems/pot
//CPU: 0.00s

using namespace std;
#include <iostream>
#include <cmath>

int main() 
{
    int cases;
    int total = 0;
    
    cin >> cases;
    
    for(int i = 0; i < cases; i++)
    {
        int var;
        cin >> var;
        
        total += pow(var/10, var % 10);
    }

    cout << total;
    return 0;
}
