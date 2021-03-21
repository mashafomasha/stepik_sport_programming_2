#include <iostream>
#include "List.cpp"

using namespace std;

int programm_01()
{
    List container = List();

    int m;
    cin >> m;

    int op, pos, val;
    for (int i = 0; i < m; ++i) {
        cin >> op;

        switch (op)
        {
        case 1:
            cin >> val >> pos;
            container.instert_after(pos, val);
            break;
        case 2:
            cin >> pos;
            break;
        case 3:
            cin >> pos;
            break;
        default:
            break;
        }
    }

    container.print_contents();

    return 0;
}
