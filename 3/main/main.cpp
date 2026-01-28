#include <iostream>
#include "../math/add.h"
#include "../math/subtract.h"
#include "../math/divide.h"
#include "../math/multiply.h"
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;

    cout << "Add: " << add(a, b) << endl;
    cout << "Subtract: " << subtract(a, b) << endl;
    cout << "Multiply: " << multiply(a, b) << endl;
    cout << "Divide: " << divide(a, b) << endl;

}
