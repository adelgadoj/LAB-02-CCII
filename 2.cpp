#include <iostream>
using namespace std;
bool primo(int num){
    if(num==0 || num==1 || num==4) 
        return false;
    for(int i=2 ; i<num ; i++ ){
        if(num%i == 0)
            return false;
    }
    return true;
}


int main()
{
    int cont = 0;
    int x = 2;
    while(true && cont <50){
        if(primo(x)){
            cout<<x<<" ";
            cont++;
        }
        x++;
        }
    return 0;
}