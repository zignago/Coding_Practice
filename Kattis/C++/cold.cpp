//open.kattis.com/problems/cold
//CPU: 0.00s

using namespace std;
#include <iostream>

int main()
{
    int num_temps;
    cin >> num_temps;
    
    int total_freezing = 0;
    
    //individual temperature evaluation
    for(int i = 0; i < num_temps; i++)
    {
        int temp;
        cin >> temp;
        
        if(temp < 0) { total_freezing += 1; }
    }
    
    cout << total_freezing;
    
    return 0;
}
