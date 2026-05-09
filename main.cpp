#include "Library.h"

int main() {
    try {
        // أ. استخدام unique_ptr مع الأشكال
        unique_ptr<Shape> myShape = make_unique<Circle>();
        myShape->draw();

        // ب. استخدام map لتخزين الكتب مع shared_ptr
        map<int, shared_ptr<Book>> libraryMap;
        
        auto b1 = make_shared<Book>(101, "C++ Programming", 50.5);
        auto b2 = make_shared<Book>(102, "Data Structures", 40.0);

        libraryMap[b1->id] = b1;
        libraryMap[b2->id] = b2;

        cout << "Book 101: " << libraryMap[101]->title << endl;

        // ج. استخدام خوارزميات STL (البحث والترتيب)
        vector<int> numbers = {5, 2, 9, 1};
        sort(numbers.begin(), numbers.end()); // ترتيب
        
        // د. استخدام القالب المخصص Stack
        Stack<string> myStack;
        myStack.push("First Assignment");
        cout << "Stack Top: " << myStack.top() << endl;

    } catch (const exception& e) {
        // التعامل مع الأخطاء (Exception Handling)
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
