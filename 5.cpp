#include <iostream>
using namespace std;
void mayor(int l[100], int contador){
int may = l[0];
for(int i=1 ; i<contador ; i++){
    if(l[i]>may){
        may=l[i];
    }
}
cout<<"MAYOR:"<<may<<endl;
}
void menor(int l[100], int contador)
{
    int me = l[0];
    for (int i = 1; i < contador; i++){
        if (l[i] < me){
            me = l[i];
        }
    }
    cout << "MENOR:" << me << endl;
}
void media(int l[100], int contador)
{
    int med;
    for (int i = 0; i < contador; i++){
        med=med+l[i];
    }
    med=med/contador;
    cout << "MEDIA:" << med << endl;
}

int main()
{
    int lista[100];
    int n=0;
    int c=0;
    string r;
    while(true){
        cout << "INGRESE NUMERO: ";
        cin >> lista[n];
        c++;
        cout << "Quieres ingresar otro numero? (SI o NO)";
        cin >>r;
        if(r=="no" || r=="NO") {
            
            mayor(lista,c);
            menor(lista,c);
            media(lista,c);
            exit(1);
        }
     
        n++;
    }
    return 0;
}