//Jalen Powell
//Project1.cpp
//This is our first opportunity at utilizing our resources.


#include <iostream>
#include <cmath>
using namespace std;

static float calculateSD(float data[]);
static int factorialCalculator(int num);

int main()
{

    int i, j, factorial = 1;
    float data[10];

    cout << "Enter a positive number (<10):";
    cin >> j;

    for(i = 0; i < j; ++i)
        cin >> data[i];

    cout << endl << "Standard Deviation = " << calculateSD(data) << endl;

    

    cout << "Factorial of " << j << " = " << factorialCalculator(j) << endl;
    return 0;

}

static float calculateSD(float data[])
{
    float sum = 0.0, mean, standardDeviation = 0.0;
    int i;

    for(i = 0; i < 10; ++i)
        sum += data[i];
    

    mean = sum / 10;

    for(i = 0; i < 10; ++i) {
        standardDeviation += pow(data[i] - mean, 2);
    }

return sqrt(standardDeviation / 10);
}

static int factorialCalculator(int num) {

    if (num == 0 || num == 1) return 1;    
    
    return num * factorialCalculator(num - 1);
}