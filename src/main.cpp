#include <iostream>
#include <string>
#include "card.h"

using namespace std;

int main() {
    Card mycard("Hearts", "Ace");
    cout << mycard.show() << endl;
    
    return 0;
}
