//https://open.kattis.com/problems/pot

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int num;
    int total = 0;
    
    cin >> num;
    
    for(int i = 0; i < num; i++)
    {
        int var;
        cin >> var;
        
        int exponent = var % 10;
        
        total = total + pow((var/10), exponent);
    }

    cout << total;
    
    return 0;
}