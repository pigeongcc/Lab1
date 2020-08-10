#include <iostream>

using namespace std;

int main()
{
    int a, b, min, number, ans;
    cin >> a >> b;
    
    if (a < b){
        min = a;
    }
    else min = b;
    
    ans = 1;
    number = 2;
    
    while (number < min) {
        if (a % number == 0 && b % number == 0) ans = number;
        number ++;
    }
    
    cout << ans;
    
    return 0;
}
