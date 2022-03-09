#include <iostream>
// #include "struktur_data.h"
#include "Mahasiswa.cpp"

void display(struct node *start){
    system("clear");
    if (start == NULL)
    {
        std::cout<<"Data masih kosong\n";
        return;
    }
    struct node *p = start;
    std::cout<<"List Mahasiswa : \n";
    int count = 1;
    while (p != NULL)
    {
        std::cout<<count<<". "<<p->info.nama<<std::endl;
        p = p->next;
        count++;
    }
}
int main(int argc, char const *argv[])
{
    mahasiswa mhs1;
    mhs1.nim = "1905016";
    mhs1.nama = "Mar'i Adhari";
    mhs1.alamat = "Cirebon, Jawa Barat";
    mhs1.no_hp = "083890282306";
    mhs1.email = "mariadhari6@gmail.com";
    mhs1.jurusan = " Teknik Informatika";
    mhs1.usia = 21;
    mhs1.semester = 6;
    mhs1.sks = 20;
    mhs1.ipk = 30.0;

    mahasiswa mhs2;
    mhs2.nim = "1905011";
    mhs2.nama = "Isa Ias";
    mhs2.alamat = "Cirebon, Jawa Barat";
    mhs2.no_hp = "085224179685";
    mhs2.email = "isaias123@gmail.com";
    mhs2.jurusan = "Teknik Informatika";
    mhs2.usia = 21;
    mhs2.semester = 6;
    mhs2.sks = 20;
    mhs2.ipk = 29.9;
    struct node *start = NULL;
    Mahasiswa mhsObj =  Mahasiswa();
    start = mhsObj.addFirst(start, mhs2);
    start = mhsObj.addFirst(start, mhs1);

    mhs2.nama = "Rahul Ken Y.";
    start = mhsObj.addBeforeIndex(start, mhs2, 1);
    mhs2.nama = "Amung";
    start = mhsObj.addBeforeIndex(start, mhs2, 2);
    mhs2.nama = "Ibnu";
    start = mhsObj.addAfterIndex(start, mhs2, 2);
    int pilihan;
    while (1)
    {
        std::cout << "1. Display\n";
        std::cout << "2. Tambahkan node diawal\n";
        std::cout << "3. Tambahkan node diakhir\n";
        std::cout << "4. Tambah node setelah index\n";
        std::cout << "5. Tambah node sebelum index\n";
        std::cout << "6. Hapus dari node index\n";
        std::cout << "7. Cari\n";
        std::cout << "8. Total node\n";
        std::cout << "9. Keluar\n";
        std::cout << "Pilih : ";
        std::cin>>pilihan;
        if (pilihan == 1)
        {
            display(start);
        }
        

    }

    return 0;
}
