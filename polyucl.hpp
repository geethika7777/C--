//
//  polyucl.hpp
//  PolymorphismUCL
//
//  Created by Geethika Rathnajith on 2024-01-18.
//

#ifndef polyucl_hpp
#define polyucl_hpp
#pragma onces

#include <iostream>

class A {
public:
    virtual void print();
};

class B : public A {
public:
    void print();
};

class C : public A {
public:
    void print();
};

class D : public A {
public:
    void print();
};

class E : public B {
public:
    void print();
};

class F : public B {
public:
    void print();
};

class G : public B {
public:
    void print();
};

#endif /* polyucl_hpp */
