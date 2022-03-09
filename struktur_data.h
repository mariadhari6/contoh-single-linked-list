#include <iostream>
std::string jurusan[] = {
    "D3 Teknik Informatika",
    "D3 Teknik Mesin",
    "D3 Teknik Pendingin",
    "D3 Akademi Keperawatan",
    "D4 Rekayasa Perangkat Lunak",
    "D4 Perancangan Manufaktur",
};
struct mahasiswa
{
    std::string nim, nama, alamat, no_hp, email, jurusan;
    int usia, semester, sks;
    double ipk;
};
struct node
{
    mahasiswa info;
    struct node *next = NULL;
};