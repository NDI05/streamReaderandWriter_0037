#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string baris;
    string namaFile;
    ofstream outfile;

    cout << "Masukkan Nama File Yang Ingin Di Buka: ";
    cin >> namaFile;

    outfile.open(namaFile + ".txt");

    cout << ">= Menulis File, \'q' untuk keluar" << endl;

    while(true){
        cout << "- ";
        getline(cin, baris);
        if (baris == "q") break;
        outfile << baris << endl;
    };

    outfile.close();

    ifstream infile;
    infile.open(namaFile + ".txt");

    cout << endl << ">= Membukan dan Membaca File " << endl;

    if(infile.is_open()){
        while (getline(infile, baris))
        {
            cout << baris << '\n';
        }
        infile.close();
    }
    else cout << "Unable To Open The File";
    return 0;
};