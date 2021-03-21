#include <iostream>
#include "List.cpp"

using namespace std;

int programm_01()
{
    List container = List();

    int m;
    int o[1001][3];

    cin >> m;
    for (int i = 0; i < m; ++i) {
    	cin >> o[i][0] >> o[i][1];
    	if (o[i][0] == 1) {
    		cin >> o[i][2];
    	}
    }

    for (int i = 0; i < m; ++i) {
    	int op = o[i][0];

        switch (op)
        {
        case 1:
        	container.instert_after(o[i][1], o[i][2]);
            break;
        case 2:
        	container.erase_after(o[i][1]);
            break;
        case 3:
        	int v = container.get_at_pos(o[i][1]);
        	cout << v << endl;
            break;
        }
    }

    return 0;
}

