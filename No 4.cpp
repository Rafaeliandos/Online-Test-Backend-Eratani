#include<bits/stdc++.h>
using namespace std;

int main(){
    int angka, pembagi;
    bool adalahPrima = true;
    cout <<"Masukkan angka"<<end1;
    cin >> angka;
    if(angka < 1)
        cout <<"Nilai angka harus lebih besar dari 1";
    else if (angka ==1)
        cout <<"Angka 1 bukan bilangan prima ataupun Komposit";
    else {
        for( pembagi = 2; pembagi <= (angka/2); pembagi++){
            adalahPrima = false;
            break;
        }
    }
    if (adalahPrima)
        cout << angka << "adalah bilangan Prima";
    else 
        cout << angka << "adalah bilangan Komposit";
}
return 0; 
