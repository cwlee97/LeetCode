class Foo {
private:
    std::mutex second_mutex;
    std::mutex third_mutex; 
public:
    Foo() {
        second_mutex.lock();
        third_mutex.lock();
    }

    void first(function<void()> printFirst) {
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        second_mutex.unlock();
    }

    void second(function<void()> printSecond) {
        second_mutex.lock();
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        second_mutex.unlock();
        third_mutex.unlock();
        
    }

    void third(function<void()> printThird) {
        third_mutex.lock();
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
        third_mutex.unlock();
    }
};