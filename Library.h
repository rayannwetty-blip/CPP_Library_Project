#include <iostream>
#include <vector>
#include <string>
#include <memory> // لاستخدام unique_ptr و shared_ptr
#include <map>
#include <algorithm>

using namespace std;

// 1. هرمية الأشكال (Shape Hierarchy)
class Shape {
public:
    virtual void draw() = 0; // دالة افتراضية بحتة (Abstract)
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing a Circle..." << endl; }
};

// 2. كلاس الكتاب مع تحميل العمليات (Operator Overloading)
class Book {
public:
    int id;
    string title;
    double price;

    Book(int id, string title, double price) : id(id), title(title), price(price) {}

    // تحميل عملية المقارنة (==)
    bool operator==(const Book& other) const {
        return id == other.id;
    }

    // تحميل عملية الأصغر من (<) للترتيب
    bool operator<(const Book& other) const {
        return price < other.price;
    }
};

// 3. كلاس القالب (Class Template: Stack)
template <typename T>
class Stack {
private:
    vector<T> elements;
public:
    void push(T element) { elements.push_back(element); }
    void pop() {
        if (elements.empty()) throw runtime_error("Stack is empty!"); // Exception Handling
        elements.pop_back();
    }
    T top() { return elements.back(); }
};
