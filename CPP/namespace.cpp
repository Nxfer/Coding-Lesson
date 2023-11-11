#include <iostream>


/* Namespace  = provides a solution for preventing name conflicts
             in large projects. Each entity needs a unique name.
             A namespace allows for identically named entities
             as long as the namespaces are different.
*/

namespace satu{
    int x = 1;
}

namespace dua{
    int x = 2;
}

int main() {
    using std::cout;
    using namespace satu;

    cout << dua::x;


return 0;
}