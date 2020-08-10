#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1,y1,x2,y2,x3,y3, l1, l2, l3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    l1 = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    l2 = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
    l3 = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));

    if (l1+l2 <= l3 || l1+l3 <= l2 || l3+l2 <= l1){
                cout << "Triangle doesn't exist." << endl;
                return 0;
              }
    cout << "Triangle does exist." << endl;
    
    float S, p;
    p = (l1 + l2 + l3)/2;
    S = sqrt(p*(p-l1)*(p-l2)*(p-l3));
    cout << "Area is " << S;
    return 0;
}
