#include <iostream>
#include <string>
using namespace std;

struct Member {
    string nama;
    string alamat;
    string no_telp;
    string email;
    int biaya_pendaftaran;

};

void tampilkan_informasi_member(Member member) {

    cout << "Nama : " <<member.nama<<endl;
    cout << "Alamat : " <<member.alamat<<endl;
    cout << "No Telp : " <<member.no_telp<<endl;
    cout << "Email : " <<member.email<<endl;
    cout << "Biaya Pendaftaran : " <<member.biaya_pendaftaran<<endl;
}

bool verifikasi_new_member(Member member) {

    if (member.nama.length() < 3)
    {
        return false ;
    }

    if (member.email.length() < 5)
    {
        return false;
    }

    if (member.alamat.length() < 5)
    {
        return false;
    }

    if (member.no_telp.length() < 5)
    {
        return false;
    }

    if (member.biaya_pendaftaran < 10000)
    {
        return false;
    }

    return true;
}
    

void setuju(Member member) {
    cout << "Pendaftaran disetujui dengan Nama : "<< member.nama << endl;
    cout<< endl;
    cout<<"===============================" <<endl;
    cout<< "Berikut data detailnya : "<<endl;
    cout<<"===============================" <<endl;
    tampilkan_informasi_member(member);
    cout<<"===============================" <<endl;
}

void tidak_setuju(Member member) {
    cout << "Pendaftaran belum disetujui dengan Nama : "<< member.nama << endl;
}

main() {
    
    Member member;

    cout << "Nama Anda : ";
    getline(cin, member.nama);

    cout << "Email Anda : ";
    getline(cin, member.email);

    cout << "Alamat Anda : ";
    getline(cin, member.alamat);

    cout << "No Telp Anda : ";
    getline(cin, member.no_telp);

    cout << "Biaya Pendaftaran : ";
    cin>> member.biaya_pendaftaran;

    bool valid = verifikasi_new_member(member);

        if (valid) {
            system("cls");
            setuju(member);
        } else {
            system("cls");
            tidak_setuju(member);
        }

}