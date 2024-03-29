#ifndef _14_7_STRING_
#define _14_7_STRING_
#include <iostream>
#include <memory>

using namespace std;

class String{
    friend ostream& operator<<(ostream& os_out, String& s);
    friend bool operator==(const String&, const String&);
    friend bool operator!=(const String&, const String&);
public:
    String():element(nullptr),first_free(nullptr),cap(nullptr){}
    String(const char* in_char);

    String(const String&);
    String& operator=(const String&);

    String(String&&) noexcept;
    String& operator=(String&&) noexcept;

    auto begin(){return element;}
    auto end(){return first_free;}
private:
    allocator<char> alloc;
    void alloc_n_copy(const char* beg, const char* end);
    void free();
    char* element;
    char* first_free;
    char* cap;
};

#endif