#include "struktur_data.h"
class Mahasiswa
{
private:
public:
    Mahasiswa(/* args */);
    struct node *addFirst(struct node *start, mahasiswa info);
    struct node *addLast(struct node *start, mahasiswa info);
    struct node *addBeforeIndex(struct node *start, mahasiswa info, int index);
    struct node *addAfterIndex(struct node *start, mahasiswa info, int index);
    struct node *deleteAtIndex(struct node *start, int index);
    ~Mahasiswa();
};

Mahasiswa::Mahasiswa(/* args */)
{
}

Mahasiswa::~Mahasiswa()
{
}
