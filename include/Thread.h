#ifndef THREAD_H
#define THREAD_H

// Forward declarations
class Post;

#include <iostream>
#include <vector>


class Thread
{
    public:
        Thread(std::string title);
        virtual ~Thread();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        std::string Gettitle() { return title; }
        void Settitle(std::string val) { title = val; }
        bool Getlocked() { return locked; }
        void Setlocked(bool val) { locked = val; }

        static std::vector<Thread*> objects;

        void Getposts();

    protected:

    private:
        int id;
        std::string title;
        bool locked;
};

#include "Post.h"

#endif // THREAD_H
