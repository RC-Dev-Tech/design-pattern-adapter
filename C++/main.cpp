/*
 * Design Pattern - Adapter 轉接器模式
 * 
 * 在這個範例中，Target是一個介面，定義了應用程式所需的特定介面。
 * Adaptee擁有原始的功能，但其介面與Target介面不相容。
 * Adapter是一個轉接器，實現了Target介面，同時保有一個Adaptee的實例，以提供應用程式所需的功能。
 * Client透過Target介面與Adapter互動，使得Adaptee能夠被應用程式使用。
 */

#include <iostream>

/*
 * Target介面.
*/
class Target {
public:
    virtual void Request() = 0;
};

/*
 * Adaptee.
*/
class Adaptee {
public:
    void SpecificRequest() {
        std::cout << "Adaptee: Specific Request" << std::endl;
    }
};

/*
 * Adapter.
*/
class Adapter : public Target {
private:
    Adaptee* adaptee;

public:
    Adapter(Adaptee* adaptee) : adaptee(adaptee) {}

    void Request() override {
        std::cout << "Adapter: Adapting Request" << std::endl;
        adaptee->SpecificRequest();
    }
};

/*
 * Client.
*/
int main() {
    Adaptee* adaptee = new Adaptee();
    Target* target = new Adapter(adaptee);
    target->Request();

    delete target;
    delete adaptee;

    return 0;
}
