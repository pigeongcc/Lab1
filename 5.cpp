#include <iostream>

using namespace std;

int main()
{
    // Solved incorrectly, cause the idea is not like this. I'm gonna update it later as a homework.
    
    int a;
    cin >> a;
    string ans = "";
    
    while (a / 100 != 0){
        a = a - 100;
        ans += "C";
    }
    while (a / 50 != 0){
        a = a - 50;
        ans += "L";
    }
    while (a / 10 != 0){
        a = a - 10;
        ans += "X";
    }
    if (a <= 3){
        while(a > 0){
            a -= 1;
            ans += "I";
        }
    }
    else if (a == 4) ans += "IV";
    else if (a >= 5 && a <= 8) {
        ans += "V";
        a -= 5;
        while(a > 0){
            a -= 1;
            ans += "I";
        }
    }
    else ans += "IX";
    
    cout << ans;
    
    return 0;
}
