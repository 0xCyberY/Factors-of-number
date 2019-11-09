//Display the factors of a given number.
#include <iostream>
using namespace std;
class Factor
{
    public:
    int n, i;
    void check()
    {
    for(i = 1; i <= n; ++i)
    {
        if(n % i == 0)
            cout << i << endl;
    }
    }
};
int main()
{
    Factor obj;
    int n, i;
    cout << "Enter a positive integer: ";
    cin >> obj.n;
    cout << "Factors of " << obj.n << " are: " << endl;
    obj.check();
}

