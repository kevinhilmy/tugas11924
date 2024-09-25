#include <iostream>
using namespace std;

int main (){
    int i, n, jumlah;
    
    cout << "masukan nilai awal: " << endl;
    cin >> i;
    cout << "masukan nilai akhir: " << endl;
    cin >> n;
    for (n; n>=i; n--){
        if (n%2 != 0){
            cout << n << endl;
        }
    }
}