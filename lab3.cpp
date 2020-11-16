#include <iostream>

class Olowek
{
    Olowek();
};
class Gumka
{
    Gumka();
};

class OlowekZGumka : public Olowek, public Gumka
{};

int main()
{
    puts("Hello, World!");
    OlowekZGumka f3(2);
}
