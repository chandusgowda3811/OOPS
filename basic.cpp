#include<iostream>
using namespace std;

// Problem 1
class A1 {
public:
    int a;
    void modify_a(int x) {
        a = x;
    }
};

int main() {
    A1 a;
    a.modify_a(10);
    cout << a.a << endl;
    return 0;
}

// Problem 2
class A2 {
public:
    int a, b;
    A2(int a, int b) {
        this->a = a;
        this->b = b;
    }
    int get_sum() {
        return (a + b);
    }
};

int main() {
    A2 obj1(3, 7);
    A2 *ptr;
    ptr = &obj1;
    (*ptr).a = 5;
    cout << obj1.get_sum() << endl;
    return 0;
}

// Problem 3
class A3 {
private:
    int a;
public:
    A3() {
        a = 5;
    }
    friend void modify();
};

void modify() {
    A3 obj1;
    cout << "Private member of class A3: " << obj1.a << endl;
}

int main() {
    modify();
    return 0;
}

// Problem 4
class Distance {
private:
    int meter;
    friend int add_five(Distance);
public:
    Distance() {
        meter = 0;
    }
};

int add_five(Distance d) {
    d.meter += 5;
    return d.meter;
}

int main() {
    Distance d;
    cout << "Distance: " << add_five(d) << endl;
    return 0;
}

// Problem 5
class A5 {
    int a;
    friend void modify(A5 &ob);
public:
    A5() {
        a = 5;
    }
    void get() {
        cout << a << endl;
    }
};

void modify(A5 &ob) {
    ob.a += 13;
}

int main() {
    A5 obj;
    obj.get();
    modify(obj);
    obj.get();
    return 0;
}

// Problem 6
class A6 {
    const int a;
    int b;
public:
    A6(int x, int y) : a(x) {
        b = y;
    }
    void inc() const {
        cout << a << b << endl;
    }
};

int main() {
    A6 obj(2, 4);
    obj.inc();
    return 0;
}

// Problem 7
class A7 {
public:
    static int a;
    void increment() {
        a++;
    }
    int get() {
        return a;
    }
};

int A7::a = 10;

int main() {
    A7 obj1, obj2, obj3;
    obj1.increment();
    obj2.increment();
    obj3.increment();
    cout << obj3.get() << obj2.get() << obj1.get() << endl;
    return 0;
}

// Problem 8
class A8 {
public:
    static int a;
    static void increment() {
        a++;
    }
    static int get() {
        return a;
    }
};

int A8::a = 10;

int main() {
    A8 obj1, obj2, obj3;
    obj1.increment();
    obj2.increment();
    A8::increment();
    cout << obj3.get() << endl;
    return 0;
}

// Problem 9
class A9 {
public:
    static int a;
    static void increment() {
        a += 3;
    }
    int get(A9 obj) {
        return (a + obj.a);
    }
};

int A9::a = 10;

int main() {
    A9 obj1, obj2;
    obj1.increment();
    obj2.increment();
    cout << obj2.get(obj1) << endl;
    return 0;
}

// Problem 10
class A10 {
public:
    static int a;
    static void increment() {
        a += 3;
    }
    int get(A10 obj) {
        return (a + obj.a);
    }
};

int A10::a = 10;

int main() {
    A10 obj1;
    int *ptr;
    ptr = &obj1.a;
    *ptr *= 2;
    cout << obj1.get(obj1) << endl;
    return 0;
}
