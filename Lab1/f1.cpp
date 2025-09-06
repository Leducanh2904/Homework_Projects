#include <iostream>
using namespace std;

int f1(int x) {   
    if (x > 10)         
    return 2 * x;     
    else 
    return -x; 
}
int main()
{
    int x;
    cin >> x;
    cout << f1(x) << endl;
}
