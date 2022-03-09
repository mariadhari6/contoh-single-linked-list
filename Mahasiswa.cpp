#include "Mahasiswa.h"
struct node *Mahasiswa::addFirst(struct node *start, mahasiswa info)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = info;
    new_node->next = start;
    start = new_node;
    return start;
}
struct node *Mahasiswa::addLast(struct node *start, mahasiswa info)
{
    if (start == NULL)
    {
        return addFirst(start, info);
    }
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = info;
    struct node *p = start;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = new_node;
    return start;
}
struct node *Mahasiswa::addBeforeIndex(struct node *start, mahasiswa info, int index)
{
    if (start == NULL)
    {
        std::cout << "List data kosong\n";
        return start;
    }
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = info;
    int counter = 0;
    struct node *p = start;
    while (p->next != NULL)
    {
        if (counter + 1 == index)
        {
            new_node->next = p->next;
            p->next = new_node;
            return start;
        }
        counter++;
        p = p->next;
    }
    std::cout << "Gagal menambahkan\n";
    return start;
}
struct node *Mahasiswa::addAfterIndex(struct node *start, mahasiswa info, int index)
{
    if (start == NULL)
    {
        std::cout << "List data kosong\n";
        return start;
    }
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->info = info;
    struct node *p = start;
    int counter = 0;
    while (p != NULL)
    {
        if (counter == index)
        {
            new_node->next = p->next;
            p->next = new_node;
            return start;
        }
        counter++;
        p = p->next;
    }
    std::cout << "Gagal menambahkan\n";
    return start;
}
struct node *Mahasiswa::deleteAtIndex(struct node *start, int index)
{
    if (start == NULL)
    {
        std::cout << "List data kosong\n";
        return start;
    }
    struct node *p = start;
    int counter = 1;
    if (index == 0)
    {
        std::cout << "Index salah\n";
        return start;
    }
    else if (index == 1)
    {
        start = start->next;
        free(p);
        return start;
    }
    else
    {
        struct node *new_node;
        new_node = (struct node *)malloc(sizeof(struct node));
        while (p->next != NULL)
        {
            if (counter + 1 == index)
            {
                new_node = p->next;
                p->next = p->next->next;
                free(new_node);
                return start;
            }

            counter++;
            p = p->next;
        }
    }
    std::cout<<"Gagal menghapus data\n";
    return start;
}