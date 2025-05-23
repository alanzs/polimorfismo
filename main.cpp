#include <iostream>
#include <memory>

#include "sum.h"
#include "sub.h"
#include "div.h"
#include "multiply.h"

using namespace std;

int main() {
    unique_ptr<Operacion> op;

    op = make_unique<Suma>();
    cout << "sum(1, 5) = " << op->calcular(1, 5) << '\n';

    op = make_unique<Resta>();
    cout << "sub(5, 1) = " << op->calcular(5, 1) << '\n';

    op = make_unique<Division>();
    cout << "div(9, 3) = " << op->calcular(9, 3) << '\n';

    op = make_unique<Multiplicacion>();
    cout << "mul(2, 2) = " << op->calcular(2, 2) << '\n';

    return 0;
}
