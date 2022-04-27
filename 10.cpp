#include <iostream>
using namespace std;
int main()
{
    string p;
    cout << "INGRESE PALABRA:";
    cin >> p;
    int t = p.size();
    for (int i = t; i >= 0; i--)
    {
        cout<<p[i]<<endl;
    }
    return 0;
}