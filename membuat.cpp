#include <iostream>
using namespace std;;

int main(){
    int banyaknilai, nilai, sum = 0;
    cout << "masukan banyak nilai: " << endl;
    cin >> banyaknilai;
    
    for (int i=1; i <= banyaknilai; i++){
        cout << "masukan nilai ke-" << i << ":";
        cin >> nilai;

        if (nilai%2 == 0){
            sum+=nilai;
        }
    }
    cout << "jumlahnya adalah : " << sum << endl;
}