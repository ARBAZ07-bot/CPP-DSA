#include <iostream>
#include <memory>
using namespace std;
int main(){
    // 1. unique_ptr: exclusive ownership
    auto unique = make_unique<int>(10);
    cout << "unique_ptr: " << *unique << '\n';
    // 2. shared_ptr: shared ownership
    auto shared1 = make_shared<int>(20);
    {
        auto shared2 = shared1;
        cout << "shared_ptr count: "
                  << shared1.use_count() << '\n';
    }
    cout << "shared_ptr count after scope: "
              << shared1.use_count() << '\n';
    // 3. weak_ptr: non-owning observer
    weak_ptr<int> weak = shared1;
    if (auto locked = weak.lock())
    {
        cout << "weak_ptr sees: "
                  << *locked << '\n';
    }
    return 0;
}