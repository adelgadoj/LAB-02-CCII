#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"INGRESE NUMERO:";
    cin>>n;
    for(int i=0; i<=12 ; i++ ){
        cout<<n<<"*"<<i<<" = "<<n*i<<endl;
    }
    return 0;
}