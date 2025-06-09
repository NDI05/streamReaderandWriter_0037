#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string baris;
    ofstream outfile;

    outfile.open("contohFile.text");

    cout << ">= Menulis File, \'q' untuk keluar" << endl;

    while(true){
        cout << "- ";
        getline(cin, baris);
        if (baris == "q") break;
        outfile << baris << endl;
    };

    outfile.close();

    ifstream infile;
    infile.open("contohFile.text");

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