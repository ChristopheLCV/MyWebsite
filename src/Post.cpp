#include "Post.h"
#include "Thread.h"


Post::Post(Thread* _thread, std::string _content) : content(_content), thread(_thread)
{
    objects.push_back(this);
}

Post::~Post()
{
    //dtor
}

std::vector<Post*> Post::objects;
