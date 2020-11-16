#pragma once

#include "ObjCounter.hpp"

struct Statek
{
    virtual unsigned int transportuj() = 0;
		public:
		virtual ~Statek(){};
};

class Zaglowiec : public Statek, CountThis< Zaglowiec >
{
public:
    unsigned int transportuj() override { return capacity; }

    friend struct Stocznia;
		virtual ~Zaglowiec(){}

private:
    Zaglowiec(const unsigned int c) : capacity{c} {}
    unsigned int capacity;
};

class Tankowiec : public Statek
{
public:
    unsigned int transportuj() override { return capacity; }

    friend struct Stocznia;
		virtual ~Tankowiec(){};

private:
    Tankowiec(const unsigned int c) : capacity{c} {}
    unsigned int capacity;
};
