#include <iostream>
using namespace std;

int main(){
    try{
        cout << "Selamat Datang Di Prodi TI" << endl;
        throw 0.5;
        cout << "Pernyataan Tidak Akan Di Eksekusi" << endl;
    }catch (int a){
        cout << "Pengecualian Akan Di Eksekusi" << endl;
    }catch (...){

    };
};